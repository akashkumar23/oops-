// Overloading of a unary  operator as a friend function
#include<bits/stdc++.h>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        void set(int x, int y){
            a=x;
            b=y;
        }
        void get(){
            cout<<"a:"<<a<<" b: "<<b<<endl;
        }
        friend Complex operator-(Complex);
};

Complex operator-(Complex c){
    Complex tmp;
    tmp.a = -c.a;
    tmp.b = -c.b;
    return tmp;
}


int main(){
    
    Complex c1,c2;
    c1.set(5,8);
    c1.get();
    c2 = -c1; //c2 = operator-(c1);
    c2.get();
    return 0;
}
