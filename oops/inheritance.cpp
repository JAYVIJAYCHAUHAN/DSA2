#include<iostream>
using namespace std;
 class vehical{
    private :
    int speed;
    public:
    string color;
    int price;
    protected:
    int model;
    int getSpeed(){
        return speed;
    }
 };
class car:public vehical{
 public:
 int type;
};
class tata:public vehical{
    public:
    int year;
};
int main(){
    vehical v;
   // v.speed=43;
   // cout << v.speed << endl;
    v.color="blue";
    cout << v.color<< endl;
    //v.model=3;
   // cout << v.model<< endl;
    car c;
    c.color="yell";
  cout << c.color<< endl;
  tata t;
  t.year=3222;
  cout << t.year<< endl;
  
  t.price=32222;
  cout << t.price<<endl;
   
  return 0;

}