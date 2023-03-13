#include<iostream>
using namespace std;
class complex{
  public:
  int real1,real2,im1,im2;
  complex(int a,int b){
      real1=a;
      im1=b;
      real2=a;
      im2=b;
  } 
  void plus(){
     int c1=real1+real2+(im1+im2);
     int c2=real2+im2;
  }
  void display(){
      cout << c1<<"i" <<c2<<"i"<<endl;
  }
};
int main(){
int real1,real2,im1,im2;
cin>>real1>>im1;
cin>>real2>>im2;
complex c1(real1,im1);
complex c2(real2,im2);
int choice;
cin>>choice;
if(choice==1){
    c1.plus();
    c1.display();
}
 else if(choice==2){
    c2.plus();
    c2.display();
} 
else {
    return 0;
}
}