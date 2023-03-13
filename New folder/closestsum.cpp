#include<bits/stdc++.h>
using namespace std;
  void printClose(int arr1[],int arr2[],int m,int n,int x){
    int diff=INT_MAX;
    int res_l;
    int res_r;
    int l=0;
     int r=n-1;
     while(l<m && r>=0){
        if(abs(arr1[l]+arr2[r]-x)<diff){
            res_l=l;
            res_r=r;
            diff=abs(arr1[l]+arr2[r]-x);
        }
        if(arr1[l]+arr2[r]>x)
            r--;
        
        else
        l++;
     }
     cout << "the closest pair is "<< arr1[res_l] << " " << arr2[res_r] << endl;
  }
 int main()
 {
    int a[]={1,4,5,7};
    int b[]={10,20,30,40};
    int m=sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    int x = 38;
    
    printClose(a,b,m,n,x);
    return 0;

 }