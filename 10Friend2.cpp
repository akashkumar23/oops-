// A friend can be friend to more than one class
// So this is the scenerio where friend function in used
// if we want to perform an operation where we require the 
// private member variables of 2 pr more classes

#include<bits/stdc++.h>
using namespace std;

class Class2; // decalre a class2 above to avoid error from line 21
class Class1{

    private:
        int a;
    public:
        void set(int x){
            a = x;
        }
        void get(){
            cout<<a;
        } 

    // friend function can be friend to more than one class
    friend void fun(Class1, Class2);
};
class Class2{

    private:
        int b;
    public:
        void set(int x){
            b = x;
        }
        void get(){
            cout<<b;
        }
    // friend function can be friend to more than one class
    friend void fun(Class1, Class2);
};

void fun(Class1 oo1, Class2 oo2){
    cout<<"sum :"<<oo1.a + oo2.b;
}

int main(){

    Class1 o1;
    Class2 o2;
    o1.set(5);
    o2.set(6);
    o1.get();
    o2.get();

    fun(o1,o2);
    
}