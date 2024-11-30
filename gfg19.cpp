#include<bits/stdc++.h>
using namespace std;

class Test{
    protected:
        int x;
    public:
        Test(int i): x(i){}
        void fun() const {cout<<"fun() const"<<endl;}
        void fun(){cout<<"fun()"<<endl;}


    // => The two methods void fun() const and void fun() have the same signature except 
    // that one is const and the other is not.

    // => const void fun() is called on const object and void fun() is called on a non-const object.
    // => C++ allows member methods to be overloaded on the basis of const type.
    // => overloading on the basis of const type can be useful when a function returns
    // reference or pointer.
    // => we can make one function const, that returns a const reference or const pointer, other non-const function,
    // that returns non-const reference or pointer
    

};

int main(){
    Test t1(10);
    const Test t2(20);
    t1.fun();
    t2.fun();
    return 0;
}