// Overloading of a operator as a friend function
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

       
        friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex c1, Complex c2){
        Complex temp;
        temp.a = c1.a+c2.a;
        temp.b = c1.b+c2.b;
        return temp;
}


int main(){
    Complex c1,c2,c3;
    c1.set(5,9);
    c2.set(10,20);
    c1.get();
    c2.get();
    // c3 = c1+c2; // c3 = c1.operator+(c2) // as default 
    c3 = c1+c2;   // c3 = operator+(c1,c2) // as friend function
    c3.get();
    return 0;
}
