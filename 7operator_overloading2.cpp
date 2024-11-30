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
        // binary operator
        Complex operator+(Complex c){
            Complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp;
        }
        // unary operator
        Complex operator-(){
            Complex temp;
            temp.a = -a;
            temp.b = -b;
            return temp;
        }


};

int main() {
    Complex c1,c2;
    c1.set_data(5,6);
    // c2 = c1.operator-(); // c1 is the caller object
    c2 = -c1;
    c2.show_data();
    return 0;
}
