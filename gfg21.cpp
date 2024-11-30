#include<bits/stdc++.h>
using namespace std;

class A{
    protected:
        int x;
    public: 
        A(): x(0){}
        friend void show();
};

class B: public A{
    private:
        int y;
    public:
        B(): y(0){}
};

void show()
{
    A a;
    B b;
    cout<<a.x<<endl;
    cout<<b.y<<endl; // Compilation Error in show() because y is private in class B
}

// show() has been declared as a friend in class A, however, it hasn't
// been declared as a friend to classB. Thus, it can't access its private members y.

int main(){
    show();
    return 0;
}