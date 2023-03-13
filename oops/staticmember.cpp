#include<iostream>
using namespace std;
 class student{
     public:
     int roll;
     int id;
    static int totalstudent; //static memeber function 
    student(){
        totalstudent++;
    }
 };
 int student:: totalstudent=32;
 int main(){
     student s;
     s.roll=32;
     cout << s.roll << endl;
     s.id=31;
     cout << s.id << endl;
      
    student s1;
    s1.roll=32;
    cout << s1.roll << endl;
    student s2;
    student s3;
    cout << student::totalstudent<< endl;
     return 0;
 }