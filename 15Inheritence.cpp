// Class is used to describe the property and behaviour of
// an  object

// It is process of inheriting properties and behaviours
// of existing class into new class

// When to use public inderitence
/*
#include<bits/stdc++.h>
using namespace std;
class Car{
    private:
        int gear;
    public:
        void increamentGrear()
        {
            if(gear<5)
                gear++;
        }
};
class SportsCar: public Car
{

};
*/

// When to use protected or private inheritence
/*
class Array
{
    private:
        int a[10];
    public:
        void insert(int index, int value){
            a[index] = value;
        }
};
class Stack: /*public/* protected Array{
    int top;
    public:
        void push(int value){
            insert(top,value);
        }
};

void main(){
    Stack s1;
    s1.insert(34);
    s1.insert(2,56);// this is against the rule of stack, invalid 
    // here we use private or protected inheritence
}
*/