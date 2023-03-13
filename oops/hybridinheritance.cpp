#include<iostream>
using namespace std;
class vehical{
    public:
    int price;
    int tyre;
    vehical(){
        cout << "vehical construction" << endl;
    }
      ~vehical(){
        cout << "vehical construction" << endl;
    }
    print(){
    cout << "vehical" << endl;
    }
};
class car: virtual public vehical{
    public:
    string color;
 car (){
     cout << "car construction" << endl;
 }
 ~car (){
     cout << "car construction" << endl;
 }
    print(){
        cout << "car"<<endl;
    }
};
class hunda: virtual public vehical{
    public:
    int code;
    hunda(){
        cout << "hunda constructin" << endl;
    }
   ~ hunda(){
        cout << "hunda constructin" << endl;
    }
    print(){
        cout << "hunda" << endl;
    }
};
class bus:public car,public hunda{
    public:
    int data;
    bus(){
        cout << "bus construction" << endl;
    }
     ~bus(){
        cout << "bus construction" << endl;
    }
    print(){
        cout << "bus" << endl;
    }

};
int main(){
     /* 
      bus b;
      b.print()
      */
    /* bus b;
     b.bus::print();
     car c;
     c.car::print();*/
     bus b;

    return 0;
}