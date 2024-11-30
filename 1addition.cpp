#include<bits/stdc++.h>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
        void set_data(int x, int y)
        {
            a = x; 
            b = y;
        }
        void show_data(){
            cout<<a<<'+'<<b<<'i';
        }
        Complex add(Complex c){
            Complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp; 
        }
};

int main()
{
    Complex c1,c2,c3;
    c1.set_data(4,6);
    c2.set_data(5,10);
    c1.add(c2);
    c1.show_data();

    return 0;
}
