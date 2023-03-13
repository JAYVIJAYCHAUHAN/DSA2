#include<bits/stdc++.h>
 using namespace std;
    const int N=1e5+2;
      
        int main(){
             int n;
              cin>>n;
               for(int i=0;i<n;i++){
                 cin>>a[i];
               }
         build(1,0,n-1);
          while(1){
             int type;
              cin>>type;
               if(type==-1){
                 break;
               }
                if(type==1){
          int l,r;
           cin>>l>>r;
            int ans=query(1,0,n-1,l,r);
             cout << ans << endl;

         
                }
                 else if (type==2){
                     int idx,val;
                      cin>>idx>>val;
                       update(1,0,n-1,idx,val);
                       cout << query(1,0,n-1,0,n-1)<< endl;
                 }
          }
                return 0;
        }