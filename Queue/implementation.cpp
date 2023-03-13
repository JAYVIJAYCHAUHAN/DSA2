#include<iostream>
using namespace std;
 class queue{
     public:
     int*data;
     int size;
     int capacity;
     int nextIndex;
     int frontIndex;
     queue(int s){
         data = new int[s];
         capacity = s;
          nextIndex = 0;
          frontIndex = -1;
          size = 0;

     }
     int getSize(){
         return size;
     }
     bool ( isEmpty()){
         return size ==0;
     }
     void enqueue(int element){
         data[nextIndex] = element;
         nextIndex = (nextIndex+1) % capacity;
         if(frontIndex == -1){
             frontIndex = 0;
         }
         size++;
     }
     int dequeue(){
         if(isEmpty()){
             cout << "queue is empty";
         }
         int ans = data[nextIndex];
         nextIndex = (nextIndex+1) % capacity;
         size--;
         return ans;

     }
     int front(){
         if(isEmpty()){
             cout << "queue is empty";
             return 0;
         }
         return data[frontIndex];
     }
 };
 int main (){
     queue q(4);
     q.enqueue(3);
     q.enqueue(300);
     q.enqueue(30000);
     q.enqueue(3002);
     cout << q.front() << endl;
     cout << q.dequeue() <<endl;
     cout  << q.front()<<endl;
      
 }