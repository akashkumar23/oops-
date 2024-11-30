// Destructor is an instance memeber function of a class
// The name of the destructor is same as the name of the class but preceded by 
// tilde(~) symbol
// Destructor can neven be static type
// Destructor has no return type
// Destructor takes no argument(no overloading is possible)
// It is invoked implicitly when object is going to destrpy
// ye last function hota hai object ke destroy hone ke pehle
// It should be defined to release resourecs allocated to an object
#include<bits/stdc++.h>
using namespace std;

class Complex{
  private:
    int a,b;
  public:
    void setvalue(int x, int y){
        a = x; 
        b = y;
    }
    void show(){
        cout<<a<<" "<<b;
    }
    
    Complex(){
        cout<<"Object started";
    }
    ~Complex(){
        cout<<"Object is destroyed";
    }
};

int main(){
   Complex c1;
   c1.setvalue(5,6);
   c1.show();
    return 0;
}