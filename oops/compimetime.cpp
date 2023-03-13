#include<iostream>
using namespace std;
 class vehical{
     public:
     int price;
     int color;
     void print (){
         cout << "vehical" << endl;
     }
 };
 class car : public vehical{
     public:
     int data;
     void print(){
         cout << "car " << endl;
     }
 };
 int main(){
     vehical v;
     car c;
      v.print();
      c.print();
      //compile time polymorphisms at compile time desiced
      vehical *v1=new vehical ;
      v1=&v;
      vehical *v2=new vehical;
      v2=&c;
      v1->print();
    v2->print();
 }