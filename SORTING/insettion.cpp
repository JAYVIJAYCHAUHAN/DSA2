#include<bits/stdc++.h>
using namespace std;

   void insertionSort(int arr[], int n){
       int i, j, key;
       for(int i = 1; i < n; i++){
           key = arr[i];
           j = i-1;
       
       while(arr[j]>key && j >= 0){
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
        
       }
   }
  int main(){
      int n; 
      cin >> n; 
      int arr[n];
       
      for(int i = 0 ; i < n ; i++){
          cin>>arr[i];

      }
      insertionSort(arr, n);
      for(int i = 0; i < n; i++){
          cout<< arr[i] << " ";
      }
      
      return 0; 
  }