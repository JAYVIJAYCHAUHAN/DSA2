#include<bits/stdc++.h>
using namespace std;
 bool isPair(int a[],int n,int val){
    int i=0;
    int j =n-1;
    while(i<j){
        if(a[i]+a[j]==val)
        return 1;
        else if(a[i]+a[j]<val)
        i++;
        else
        j--;
    }
 }
 int main()
 {
    int arr[]={2,3,5,8,9,10,11};
    int val=17;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout << isPair(arr,n,val)<<endl;
    return 0;
 }