

// int x=4;
// float y;
// y=x; -> y=4.0

// float x=3.4;
// int x;
// x=y; --> x=3


// primitive type to class type can be done through constructor
// Complex c1;
// int x=5;
// c1 = x;

#include<bits/stdc++.h>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        void setData(int x, int y)
        {
                a=x, b=y;
        }
        void showData(){
            cout<<a<<" "<<b;
        }

    // Constructor

    Complex(){} // default constructor
    Complex(int k){
       a = k; 
       b = 0; 
    }
    

};

int main(){
    Complex c;
    int x = 5;
    c = x; // error - can be resolved by constructor
    // constructor are called when different data type are assinged in 
    // object
    // c1.Comlpex(x) === c = x;
    c.showData();
    return 0;
}
