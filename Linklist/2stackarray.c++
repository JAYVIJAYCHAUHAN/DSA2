 #include<bits/stdc++.h>
using namespace std;
class Stack{
    int *arr;
    int capacity;
    int top1,top2;
    public:
    Stack(int n){
        capacity =n;
arr=new int [n];
top1=-1;
top2=n;
    }

void pushFirstelement(int key){
    if(top1==top2){
        cout<<"stack overflow";
    }
    top1++;
    arr[top1]=key;

}
void pushSecondelement(int key)
{
    if(top1==top2){
        cout<< "stack is overflow";
    }
    top2--;
    arr[top2]=key;
}
int popfirstelement(){
    if(top1<0){
        cout<<"stack underflow";
    }
    int top=arr[top1];
    return top;
}
int popSecondelement(){
    if(top2>=capacity){
        cout<<"stack is underflow";
    }
    int top=arr[top2];
    top2++;
    return top;
}


};
int main()
{
    vector<int>arr1={4,5,3,2,1};
    vector<int>arr2={9,3,4,5,7};
     Stack stack (arr1.size()+arr2.size());
for(auto i:arr1){
    stack.pushFirstelement(i);
}
for(auto j:arr2){
    stack.popSecondelement(j);
}
cout<<"pop element from the  first stack:"<<stack.popfirstelement()<<endl;
cout<<"pop element from the second stack"<<stack.popSecondelement()<<endl;
return 0;
}
