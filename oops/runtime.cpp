 #include<iostream>
using namespace std;
 class vehical{
     public:
     int price;
     int color;
   virtual void print (){   
         cout << "vehical" << endl;
     }
     //virtual keyword is used for acheiving run time polymorphisms 
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
     c.print();
      v.print();
      vehical *v1=new vehical;
      v1=&v;
      v1->print();
      vehical *v2;
      v2=&c;
      v2->print();
     vehical *v3=new vehical;
     v3=&c;
     v3->print();
 }