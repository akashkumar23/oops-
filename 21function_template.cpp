#include<bits/stdc++.h>
using namespace std;

template <class X>
X big(X a, X b){
    if(a>=b) return a;
    else return b;
}

int main(){
    cout<<big(5,6);
    cout<<big(5.3,9.8);
    return 0;
}