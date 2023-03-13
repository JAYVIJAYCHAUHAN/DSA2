// this is the diagonal matrix implementation 
 #include<bits/stdc++.h>
 using namespace std;
  class diagonal{
    private:
     int *a;
     int n;
     public:
     diagonal(){
        int n =3;
         a = new int[3];
     }
     diagonal(int n){
        this->n=n;
        a = new int[n];

     }
     ~diagonal(){
        delete[] a;

     }
     void set(int i,int j,int x);
     int get(int i ,int j);
     void display();
  };
  void diagonal::set(int i,int j,int x){
     if(i==j)
     a[i-1]=x;
     
  }
  int  diagonal::get(int i,int j){
    if(i==j)
    return a[i-1];
    else
     return 0;
    
  }
  void diagonal::display(){
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i==j)
            cout << a[i] << "  ";
            else 
            cout << " 0 " ;
        }
        cout << endl;
    }
  }
  int main(){
    diagonal d(4);
    d.set(1,1,2);
    d.set(2,2,3);
    d.set(3,3,2);
    d.set(4,4,4);
     
    d.display();
    return 0;
  }