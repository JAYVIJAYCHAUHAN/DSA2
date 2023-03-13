#include<iostream>
using namespace std;
 class vehicle{
     public:
     int color;
     int price;
     vehicle(){
         cout << "this is the vehicle construction";
     }
     ~vehicle(){
         cout <<"this is the vechicle destruction";
     }

 };
 class car:public vehicle{
     public:
     int model;
     car(){
         cout << "this is the car default construction ";
     }
     ~car(){
         cout << "this is the car destruction";
     }
 };
 int main(){
     vehicle v;
     v.color=0;
     cout << v.color<<endl;
     car c;
     c.model=3;
     cout << c.model<<endl;
     return 0;
 }