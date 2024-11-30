#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual string print() const {
        return "This is a base class";
    }
};

class Derived: public Base{
    public:
    virtual string print() const {
        return "This is a derived class";
    }
};

void describe(Base p){
    cout<<p.print()<<endl;
}

int main(){
    Base b;
    Derived d;
    describe(b);
    describe(d);
    return 0;
}
// o/p
// This is a base class
// This is a base class

// Note that an object of Derived is passed in describe(d), but print of base class id called.
// The describe function accepts a parameter of Base type.
// This is a typical example of object slicing, when we assign an object of the derived class to an object of a 
// base type, the derived class object is sliced off and all the data 
// members inherited from the base class are copied.
// Object slicing should be avoided as there may be surprising 
// result like above.
// As a side node, ojbect slicing is not possible in Java. In java every non-primitive variables in actually a reference