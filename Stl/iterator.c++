#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int >v={3,4,5,3,2};
    for(int i=0;i<v.size();i++){
       // cout<<v[i]<<endl;
        vector<int>::iterator it=v.begin();
       // cout<<(*it)<<endl;
        //cout<<(*(it+1))<<endl;
        //this is range base for loop it is use to shortcut
        for(int value:v){
            cout<<value<<" "<<endl;
        }
    }
}