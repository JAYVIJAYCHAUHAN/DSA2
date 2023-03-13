#include<bits/stdc++.h>
using namespace std;
 void printClose(int a[],int n , int x){
    int diff=INT_MAX;
    int res_l;
    int res_r;
    int l=0;
    int r=n-1;
    while(r>l){
        if(abs(a[l]+a[r]-x)<diff){
            res_l=l;
            res_r=r;
            diff =(a[l]+a[r]-x);
        }
        if(a[l]+a[r]>x)
            r--;
        
        else
        l++;
    }
    cout << "the closest elmetme"<<a[res_l]<<" and " <<a[res_r]<<endl; 
 }

 int main(){
    int arr[]={10,22,28,29,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=54;
    printClose(arr,n,x);
    return 0;
 }