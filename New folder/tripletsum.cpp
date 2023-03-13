#include<bits/stdc++.h>
using namespace std;
void findTri(int a[],int n){
  bool fond =false;
   sort(a,a+n);
   for(int i =0;i<n-1;i++){
    int l = i+1;
    int r= n-1;
    int x=a[i];
    while(l<r){
        if(x+a[l]+a[r]==0){
            cout << x << " " << a[l] << " " << a[r] << endl;
            l++;
            r--;
            fond = true;
        }
        else if( x+a[l]+a[r]<0)
        l++;
  else 
  r--;
    }
   }
   if(fond==false)
   cout << " not exits" <<endl;
}
 int main(){
    int arr[]={0,-1,2,-3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    findTri(arr,n);
    return 0;
 }