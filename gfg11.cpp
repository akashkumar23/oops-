#include<bits/stdc++.h>
using namespace std;

int i;

class A{
    public:
        ~A() {
            i=10;
        }
};

int foo(){
    i=3;
    A ob;
    return i;
}

int main(){
    cout<<foo()<<endl;
    return 0;
}

// While returning from a function, the destructor is the 
// last method to be executed. The destructor for the object ob
// is called after the calue of i is copied to the return value
// of the function. So before the destructor could change the value of i = 10, the current value of
// i gets copied and hence the output is 3