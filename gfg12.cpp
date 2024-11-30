#include<bits/stdc++.h>
using namespace std;

class A
{
    int id;
    static int count;
    public:
        A(){
            count++;
            id = count;
            cout<<"constructor for id"<<id<<endl;
        }
        ~A(){
            cout<<"destructor for id"<<id<<endl;
        }
};

int A::count = 0;

int main(){
    A a[3];
    return 0;
}
// o/p
// constructor for id1
// constructor for id2
// constructor for id3
// destructor for id3
// destructor for id2
// destructor for id1

// id is static variable and it is increamwnted with every object
// creation. Object a[0] is created first, but the object a[2] is destroyed first
// Objects are always destroyed in the reverse order of creation.
// The reason for reverse order is, an object created later may use the previously created
// object.

// A a;
// B b(a);

// In the above code, the object b(which is created after a), may use some members of a internally.
// So the destruction of "a" before "b" may create problems.
// Therefore,  the object "b" must be destroyed before a.
