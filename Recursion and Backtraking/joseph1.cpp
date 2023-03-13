#include<bits/stdc++.h>
 using namespace std;
  int joseph(int n, int k){
      if(n == 1){
          return 1;
      }
      else 
      return (joseph(n-1,k)+k-1)%n+1;
  }
   int main(){
       int n = 14;
       int k = 2;
       cout << "this is the josepush algorithms" << joseph(n,k) << endl;
       return 0;
   }