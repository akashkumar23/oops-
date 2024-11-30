// used to avoid release memory
#include<iostream>
using namespace std;

class A
{
    int a;
    public:
        void f1(){}
        virtual ~A(){}
};
class B: public A
{
    int b;
    public:
        void f2(){}
        ~B(){}
};
int fun();
int fun()
{
    A *p = new B;
    p->f1();
    p->f2();
    delete p;
}
int main(){
    fun();
    return;
}

