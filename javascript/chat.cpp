#include <bits/stdc++.h>
#define ll   long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
#define el '\n'
using namespace std;
 
void solve()
{
  string s;cin>>s;
  for(int i=0;i<s.length();i++)
  {
      if(s[i]=='h')
      {
          for(int j=i+1;j<s.length();j++)
          {
              if(s[j]=='e')
              {
                  for(int r=j+1;r<s.length();r++)
                  {
                      if(s[r]=='l')
                      {
                          for(int h=r+1;h<s.length();h++)
                          {
                              if(s[h]=='l')
                              {
                                 for(int g=h+1;g<s.length();g++)
                                 {
                                     if(s[g]=='o')
                                     {
                                         cout<<"YES"; return ;
                                     }
                                 }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
  cout<<"NO";
}
 
 
 
int main(){
    fast
    //freopen("window.in", "r", stdin);   // for file reading
 
    //int testcases = 1; cin>>testcases;
    //while (testcases--)
    {
        solve();
    }
 
}