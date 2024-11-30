#include<bits/stdc++.h>
using namespace std;

class Base1{
    public:
        Base1(){
            cout<<"Base1 constructor"<<endl;
        }
};


class Base2{
    public:
        Base2(){
            cout<<"Base2 constructor"<<endl;
        }
};

class Derived:public Base1, public Base2{
    public:
        Derived(){
            cout<<"Derived constructor"<<endl;
        }
};

int main(){
    Derived d;
    return 0;
}

// When a class is inherites from multiple classes,
// constructors of base classes are called in the same
//  order as they are specified in inheritence 