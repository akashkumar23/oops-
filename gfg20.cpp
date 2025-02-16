#include<bits/stdc++.h>
using namespace std;

class Test{
    private:
        static int count;
    public:
        Test& fun();
};

int Test::count = 0;

Test& Test::fun(){
    Test::count++;
    cout<<Test::count<<" ";
    return *this;
}

int main(){
    Test t;
    t.fun().fun().fun().fun();
    return 0;
}

// Static members are accessible in non-static functions,  
// so no problem with accessing count in fun()
// . also , note that fun() returns the same object by reference