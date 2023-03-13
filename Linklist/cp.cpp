#include<bits/stdc++.h>
using namespace std;
int main(){
    int s1,s2,s3,s4,c=0;
    int s[100]={0};
    for(int i=0;i<4;i++){
        cin>>s[i];

    }
    sort(s,s+4);
    for(int i=0;i<4;i++){
        if(s[i]=s[i+1]){
            c++;
        }
         cout<<c<<endl;
    }
    return 0;
}