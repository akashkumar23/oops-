#include<bits/stdc++.h>
using namespace std;

class Test
{
    int x;
    public:
        void *operator new(size_t size);
        void operator delete(void*);
    Test(int i){
        x = i;
        cout<<"Constructor called"<<endl;
    }
    ~Test(){
        cout<<"Destructor called"<<endl;
    }
};

void *Test::operator new(size_t size){
    void *storage = malloc(size);
    cout<<"new calledn";
    return storage;
}

void Test::operator delete(void *p){
    cout<<"delete called"<<endl;
    free(p);
}

int main(){
    Test *m = new Test(5);
    delete m;
    return 0;  
}

// o/p
// new calledn
// Constructor called
// Destructor called
// delete called

// test *ptr = new test();

// there are 2 things that happen during the execution of the above
// statement:
//     a. memory allocation
//     b. object construction
// The new keyword is responsible for both. 
// one step in the process is to call operator new in order to allocate memory, 
// other step is to actually invoke the constructor.

// Operator new only allows us to change the memory allocation
// method but does not do anything with the constructor calling method.

// Keyword new is responsible for calling the constructor, not operator new.
// similarly, during destrucion,upon calling delete, the destructor is called first,
// thereafter the storage location is freed
