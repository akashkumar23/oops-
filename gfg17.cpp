#include<bits/stdc++.h>
using namespace std;

int fun(int x=0, int y=0, int z){ // Compilatior error: Correct=>int fun(int x, int y=0, int z=0){
    return (x+y+z);
}

// The default arguments must be the rightmost argument.
// Hence the above program produces a compilation error.
// The correct version of the above program works fine as produce 10 as o/p

int main(){
    cout<<fun(10);
    return 0;
}