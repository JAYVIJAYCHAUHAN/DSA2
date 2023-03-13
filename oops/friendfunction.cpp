#include<iostream>
using namespace std;
class vehical{
    public:
    int u;
    void print();
};
void test();
class bus{
    private:
    int x;
    protected:
    int z;
    public:
    int y;
     
    friend void vehical::print();
    friend void test();
};
void vehical::print(){
    bus v;
    v.x=43;
    v.y=99;
    v.z=32;
    cout << v.x <<endl;
    cout  << v.y << endl;
    cout << v.z << endl;
}
void test(){
    bus b;
    b.x=422;
    b.y=211;
    cout << b.x << endl;
    cout << b.y << endl;
}
int main(){
    vehical v;
    v.print();
    test();
}