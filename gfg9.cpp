#include<bits/stdc++.h>
using namespace std;

class Test{
    static int x;
    int *ptr;
    int y;
};

int main(){
    Test t;
    cout<<sizeof(t)<<endl;
    cout<<sizeof(Test *)<<endl;
    return 0;
}