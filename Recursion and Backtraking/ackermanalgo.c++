#include<bits/stdc++.h>
using namespace std;
  long long int ackarman(int m, int n){
    if(m==0){
        return n+1;
    }
    else if((m>0)&&(n==0)){
        return ackarman(m-1,1);
    }
    else if((m>0)&& (n>0)){
        return ackarman(m-1,ackarman(m,n-1));
    }
}
int main(){
   long long int a;
   int n,m;
   cout << "please enter the n and m value";
   cin>>n>>m;
    a=ackarman(n,m);
    cout<<a<<endl;
    return 0;
    
    }