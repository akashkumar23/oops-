// Overloading of insertion and extraction operator
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
        friend ostream& operator<<(ostream& ,Complex);
        friend istream& operator>>(istream& ,Complex&);
        
};

    istream& operator>>(istream &din, Complex &c){
        din>>c.a>>c.b;
        return din;
    }
    ostream& operator<<(ostream &dout, Complex c){
        dout<<c.a<<" "<<c.b;
        return dout;
    }

int main(){
    
    Complex c;
    cout<<"Enter a complex number :";
    cin>>c; // operator>>(cin,c);
    cout<<"You entered :";
    cout<<c; // operator<<(cout, c);
    return 0;
}
