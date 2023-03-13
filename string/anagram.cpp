#include<bits/stdc++.h>
 using namespace std ;

  bool areAnagram(string a, string b){
  int n= a.length();
  int m= b.length();
  if(n!=m){
      return false;
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  for(int i = 0; i<n; i++){
      if(a[i]!=b[i]){
      return false;
      }
      return true;
  }

  }
  int main(){
      string a= "jay";
      string b="jay";
      if(areAnagram(a,b))
      cout << "anagram";
      else
      cout << "not anagram";
  }