// A function is not a member function 
// of a class to which it is a friend

// Friend function is declared in the class with 
// friend keyword

//It must be defined outside the class to which 
// it is friend

#include<bits/stdc++.h>
using namespace std;

class Complex{

    private:
        int a,b;
    public:
        void set_data(int x, int y){
                a = x;
                b = y;
        }
        void get_data(){
            cout<<a<<" "<<b<<endl;
        }
        friend void fun(Complex);

};

void fun(Complex c){
    cout<<c.a + c.b;
}

int main(){
    Complex c1;
    c1.set_data(5,6);
    c1.get_data();
    fun(c1);
    return 0;
}