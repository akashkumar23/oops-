#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
        virtual void show(){
            cout<<"In Base";
        }
};

class Derieved: public Base{
    public:
        void show(){
            cout<<"In Derieved";
        }
};

int main(){
    Base *b = new Derieved();
    b->show();
    Base &br = *b;
    br.show();
    return 0;
}


// Since show() is virtual in the base class, it is called 
// according to the type of object being referred or pointed, rather 
// than the type of pointer or reference