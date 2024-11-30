#include<bits/stdc++.h>
using namespace std;

int &fun(){
    static int x = 10;
    return x;
}

int main(){
    fun() = 30;
    cout<<fun();
    return 0;
}

When a funciton returns by reference, it can be used as a value.
