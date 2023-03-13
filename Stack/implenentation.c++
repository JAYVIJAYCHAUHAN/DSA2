 #include<bits/stdc++.h>
 using namespace std;
 #define n 100
 class Stack{
     int *arr;
     int top;
     public:
     Stack(){
         arr= new int [n];
         top=-1;
     }
void push(int x){
    if(top==n-1){
        cout<<"stack is overflow and try againg"<<endl;
        return;
    }
    top++;
    arr[top]=x;
}
void pop(){
    if(top==-1){
        cout<<"no elenent is the stack"<<endl;
        return;
    }
    top--;
}
int Top(){
    if(top==-1){
        cout<<"the stack is  empty"<<endl;
        return-1;
    }
    return arr[top];
}
  bool empty(){
      return 
      top--;
  }

 };
 int main(){
     Stack st;
     st.push(1);
     st.push(2);
st.push(3);
     st.push(5);
st.push(8);
       st.push(7); 
       cout<<"top element of the stack:/n"<<endl; 
       cout<<st.Top()<<endl;
       cout<<"after poping the element of the stack/n"<<endl;
        st.pop();
         cout<<st.Top()<<endl;
         st.pop();
         cout<<"stack is empty or not:"<<endl;
     cout<<st.empty()<<endl;
       return 0;
 }