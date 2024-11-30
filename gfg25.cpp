#include<bits/stdc++.h>
using namespace std;

class Base
{
    public:
        int x, y;
    public:
        Base(int i, int j){
            x=i;
            y=j;
        }
};

class Derived: public Base{
    public:
       /* Derived(int i, int j):x(i), y(j){} // Error*/  Derived(int i, int j):Base(i,j){}
        void print(){
            cout<<x<<" "<<y;
        }
};

// The base class members cannot be directly assigned using the initializer list.
// we should call the basse constructor in order to initialize base class 
// mmbers.

int main(){
    Derived q(10, 10);
    q.print();
    return 0;
}