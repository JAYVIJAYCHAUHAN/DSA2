#include<iostream>
using namespace std;
 class student{
     public:
     int roll;
     int id;
     student(){
         cout << "this is default construction";
     }
     ~student(){
         cout <<"destructure is called";
     }
     student(int a,int b){
     roll=a;
     id=b;
     }
     void display(){
         cout << roll<<" " << id << endl;

     }

 };
 int main(){
      student c;
      c.display();
     student s(12,221);
     cout << "s";
     s.display();
     //this is copy constructer
     student s2(s);
     cout << "s2 ";
     s2.display();
     student*s3=new student(12,1221);
     s3->display();
     delete s3;
     student s4(*s3);
     s4.display();
          return 0;
 }