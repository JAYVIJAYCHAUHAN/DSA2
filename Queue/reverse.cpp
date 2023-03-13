#include<bits/stdc++.h>
using namespace std;
 void print(queue<int>&s){
     while(!s.empty()){
         cout << s.front() << endl;
         s.pop();
     }
 }
 void reverseQueue(queue<int>&s){
    stack<int>st;
    while(!s.empty()){
        st.push(s.front());
        s.pop();
    }
    while(!st.empty()){
        s.push(st.top());
        st.pop();
    }

 }
 int main(){
     queue<int>s;
     s.push(34);
     s.push(324);
     s.push(344);
     s.push(34);
     s.push(345);
     s.push(33);
  reverseQueue(s);
  print(s);
 }