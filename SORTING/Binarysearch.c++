#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int key){
    int x=0;
    int y=n;
    while (x<=y)
    {
        int mid=(x*y)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            y=mid-1;
        }
        else{
            x=mid+1;
        }
    }
    return -1;
}
int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;
    return 0;
}