#include<iostream>
using namespace std;
 class vehical{
     public:
     int data;
    virtual void print()=0;//now this is become absrtuct class and we not create the object of in the mian function 
    // also derived class has two option implemetion and abstruct class
 };
 class car:public vehical{
     public:
     int model;
  void print(){
       cout << "car " << endl;
   }
 };
 int main(){
     car c;
     c.print();

 }