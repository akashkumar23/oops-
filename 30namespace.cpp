// #include<bits/stdc++> => this includes the header files
// which contains the declaration of variables, functions, classess
// and defination of those are present in library files

// namespace is group of declaration of identifiers
// It keeps the names of its members in a distinct space so that they don't
// conflict with the names in other namespaces or global namespaces

// Syntax
// namespace Myspace{
//     // declaration
// }

// * Namespace defination doesnot terminates with 
// a semicolon like in class defination

// * The namespace defination must be done at golobal scope or
// nested inside another namespace

// * We can use an alias name for out namespace name, for ease of use

// * namespace ms = Myspace
#include<iostream>
using namespace std;

namespace Myspace{
    int a;
    int f1();
    class A
    {
        public:
            void fun1();
    };
}

int Myspace::f1(){
    std::cout<<"fun";
}

void Myspace::A::fun1(){
    cout<<"fun1";
}

using namespace Myspace;
int main(){
    a=5;
    f1();
    A obj;
    obj.fun1();
}
