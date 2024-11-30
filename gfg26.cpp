#include<bits/stdc++.h>
using namespace std;

class Base{
    protected:
        int a;
    public:
       Base(): a(0) {}
};

class Derived1: /*virtual*/ public Base{
    public:
      int c;
};

class Derived2: /*virtual*/ public Base{
    public:
      int c;
};

class Derieved3: public Derived1, public Derived2{
    public:
        void show(){
            cout<<a; // compilation error here (ambiguous)
        }
};

// This is a typical example of the diamong problem of multiple-inheritence.
// Here the base class member a is inherited through both Derived1 and Derived2
// . So there are two copies of a Derieved3 which makes the statement cout<<a: ambigious.
// The solution in c++ in to use virtual base classess

int main(){
   Derieved3 d;
   d.show();
   return 0;
}

