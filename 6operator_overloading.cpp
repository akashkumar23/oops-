// When an operator is overloaded with multiple jobs,
// it is known as operator overloading
// It is a way to implement compile time polymorphism
// Any symbol can be used as function name
    // -> If it is a valid operator in C language
    // -> If it is preceded by operator keyword
// cannot overload sizeof and ?: operator
#include <iostream>
using namespace std;

class Complex
{

    private:
        int a,b;
    public:
        void set_data(int x, int y){
            a = x;
            b = y;
        }
        void show_data(){
            cout<<a<<" "<<b<<endl;
        }

        Complex operator+(Complex c){
            Complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp;
        }

};

int main() {
    Complex c1, c2,c3, c4;
    c1.set_data(5,6);
    c2.set_data(10,20);
    c1.show_data();
    c2.show_data();
    c3 = c1.operator+(c2);
    c4 = c1 + c2; // here c1 is the caller object and it should be in the left side if the operator(+)
    c3.show_data();
    c4.show_data();
    return 0;
}
