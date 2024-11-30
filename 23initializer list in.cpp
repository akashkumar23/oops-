// Initializer list is used to initialize data members of a 
// class

// The list of members to be initialized is 
// indicated with constructor as a comma seperated list followed by colon

// There are situations where initialization of data members inside constructor doesn't
// work and initializer list must be used
    // 1. for initialization of non-static const data members
    // 2. for initialization of reference members

#include<bits/stdc++.h>
using namespace std;

class Dummy
{
    private:
        int a,b;
        // cosnt and reference variable should be defined during declaration
        const int x;
        // if we have const instance variable 
        // then we have to use initializer
        int &y;
        // same reason as above for this also
    public:
        // initializer_list
        Dummy(int &m):a(5),b(6),x(m);
        // Dummy(){
        //     a=5;
        // }  
};

void main(){
    int m = 6;
    Dummy d1(m);
}