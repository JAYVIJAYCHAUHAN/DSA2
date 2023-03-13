#include<iostream>
#include<queue>
#define n 100
using namespace std;
class Queue{
    int*arr;
    int front;
    int back;
    public:
    Queue(){
        arr=new int[n];
        front=-1;
back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"queue is overflow"<<endl;
            return ;
        }
        back++;
        arr[back]=x;
        if(front ==-1){
            front ++;
        }
    }
    void pop(){
        if(front==-1||front>back){
            cout<<"no element is the queue"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1|| front>back){
        
            cout<<"no element is the queue"<<endl;
            return -1;
        }
        return arr[front];


    }
    bool empty(){
        if(front==-1||front>back){
            return true;
        }
        return false;
    }
};
int main(){
    Queue q;
    q.push(9);
    q.push(3);
    q.push(8);
    q.push(9);
    q.push(2);
    q.push(7);
    q.push(5);
    q.push(6);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;


}