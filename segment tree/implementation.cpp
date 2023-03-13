#include<bits/stdc++.h>
 using namespace std;
  
   const int N=1e5+2;
    int a[N],tree[4*N];
     
      void build(int node,int st, int end){
          if(st==end){
            tree[node]=a[st];
             return ;
          }
        // start and end is not equal then 
    // then apply devide and conquire method;
         int mid =(st+end)/2;
          build(2*node,st,mid);
           build(2*node+1,mid+1,end);
            // this is for sum;
            tree[node]=tree[2*node]+tree[2*node+1];
                     
      }
       int query(int node,int st,int end,int l,int r){
           // no overlap
            // l    r  st end

          if(st>r || end<l){
           return 0;
         }
      // if given range in btw l st en r
      // complete overlap
        if(l<=st && end<=r){
           return tree[node];
        }
         // partial overlap
      
       // st l en r
        int mid=(st+end)/2;
         int p = query(2*node,st ,mid,l,r);
          int q=query(2*node+1, mid+1,end,l,r);
          return p+q;
          
          
       }
        int main(){
             int n;
              cin>>n;
               for(int i=0; i<n;i++){
                 cin>>a[i];
               }
               build(1,0,n-1);
        //         for(int i=1;i<15;i++){
        //              cout << tree[i] << endl; 
        //         }
         while(1){
           int type;
            cin>>type;
             if(type==-1){
               break;
             }
              if(type==1){
                 int l,r;
                  cin>>l>>r;
// root se lelar 0 to n-1 tak
                   int ans=query(1,0,n-1,l,r);

                   cout << ans << endl;

              }
         }
        }