#include<bits/stdc++.h>
using namespace std;
 int main(){
     stack<char>st;
     string s;
     cin>>s;
     int count=0;
     int n = s.size();
     for(int  i =0 ;i<n ;i++){
         if(s[i]=='{'){
             st.push(s[i]);
         }
         else{
             if(st.empty()){
                 ++count;
                 st.push('{');
             }
             else{
                 st.pop();
             }
         }
     }
     if(st.size()%2!=0){
         cout << -1;
         return 0;
     }
     count+=(st.size())/2;
     cout << count << endl;
     return 0;
 }