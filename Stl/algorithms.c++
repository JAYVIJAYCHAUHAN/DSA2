#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v={2,3,45,5,3,5};
int min=*min_element(v.begin(),v.end());
cout<<min<<endl;
int max=*max_element(v.begin(),v.end());
cout<<"this is max"<<max<<endl;
int sum=accumulate(v.begin(),v.end(),0);
cout<<"the sum is"<<sum<<endl;
reverse(v.begin(),v.end());
for(int rev:v){
 cout<<rev<<endl;
}
return 0;
}