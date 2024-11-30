#include<bits/stdc++.h>
using namespace std;

class Complex{

    private:
        int a,b;
    public:

        void show_data(){
            cout<<a<<" "<<b<<endl;
        }

        Complex(){
            // this is 1st
            cout<<"constructor";
        }
        Complex(int x, int y){
            // this is 2nd
            a = x, b = y;
        }
        Complex(int x){
            // this is 3rd
            a = x;
        }
        // copy constructor
        Complex(Complex &c /* c will be of 2nd type*/){
           a = c.a;
            b = c.b; 
        }
};

int main(){
    Complex c1(5,6);
    // Complex c4 = c1; 
    Complex c4(c1); // this will work because of copy constructor 
    c4.show_data();
    return 0;
}