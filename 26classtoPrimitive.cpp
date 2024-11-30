#include<bits/stdc++.h>
using namespace std;


class Complex
{
    private:
        int a, b;
    public:
        void set(int x, int y){
            a = x;
            b = y;
        }
        void show(){
            cout<<a<<" "<<b;
        }
        operator int()
        {
            return (a);
        }
};

int main(){
    Complex c1;
    c1.set(3,4);
    c1.show();
    int x;
    // complex to primi
    x=c1; // x=c1.operator int();
    
    cout<<x;
    return 0;
}