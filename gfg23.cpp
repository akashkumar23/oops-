#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
       void show(){
        cout<<"In Base";
       }
};

class Derived:public Base{
    public:
        int x;
        Derived():x(10){}
        void show(){
            cout<<"In Derived";
        }
};

int main(){
    Base *bp;
    Derived d;
    bp=&d;
    bp->show();
    // cout<<bp->x; compilation error: due to this line
    return 0;
}

// A base class pointer can point to a derieved class object,
// but we can only acccess base class member or virtual functions 
// using the base classs pointer