#include<iostream>
using namespace std;
 class student{
     private:
     int age;
     int roll;
     string name;
     public:
     void display(){
         cout << age << " " <<roll << " " << name << endl;
     }
       int getAge(){
           return age;
       
      }
      int getRoll(){
          return roll;
      }
      string getName(){
          return name;
      }
     void setAge(int a,int b,string c){
         age=a;
         roll=b;
         name=c;
     }
 };
 int main(){
     student s;
     s.getAge();
     s.getRoll();
     s.getName();
     s.setAge(12,22,"jay");
     s.display();
     return 0;
 }