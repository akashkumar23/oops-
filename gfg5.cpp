#include<bits/stdc++.h>
using namespace std;

class Test
{
    public:
        Test(){
            cout<<"Constructor called"<<endl;
        }
};

int main(){
    Test *t = (Test *)malloc(sizeof(Test));
    return 0;
}

// o/p = empty
// Unlike new, malloc() doesnot call the constructor.
// if we replace malloc() with new, the constructor
// is called. Malloc() simply allocates emmory equal to 
// the requirements of the class and return void pointer.