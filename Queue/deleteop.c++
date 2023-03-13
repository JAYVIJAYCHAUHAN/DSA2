#include<iostream>
#include<queue>
using namespace std;
int Queue[200];
int n=100;
 int front=-1;
 int back=-1;
 void insertqueue(){
     int val;
     if(back==n-1)
         cout<<"queue is overflow"<<endl;
        
     
     
         else
         {
             if(front==-1)
                 front=0;
             cout<<"insert the element is the queue"<<endl;
             cin>>val;
             back++;
             Queue[back]=val;
         }
     
 }
     void deleteQueue(){
         if(front==-1||front>back){
             cout<<"queue overflow"<<endl;
             return ;
         }
         else{
             cout<<"element deleted from the queue is:"<<Queue[front]<<endl;
             front++;;
         }
     }
 
 
     void display(){
         if(front==-1){
             cout<<"queue is empty"<<endl;

         }
         else{
             cout<<"queue element is"<<endl;
             for(int i=front;i<=back; i++){
                 cout<<Queue[i]<<" "<<endl;
             }

         }
     }
 
         int main(){
    int y;
    cout<<"Insert element to queue\n"<<endl;
    cout<<" Delete element to queue\n"<<endl;
    cout<<"display element from queue"<<endl;
    cout<<"exit"<<endl;
    do{
        cout<<"enter your choice "<<endl;
        cin>>y;
         
        switch (y)
        {
        case 1: insertqueue();
break;
        case 2: deleteQueue();
        break;
        case 3: display();
        break;
        case 4:
        cout<<"exit"<<endl;

        default:
        cout<<"invalid choice"<<endl;
            break;
        }
    }
    while(y!=4);
    return 0;
    }
