// object ke dwara access hone wali memory ka 
// creation ko dynamic constructor karta


#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        int a,b;
        int *p;
    public:
        A(){
            a=0;b=0;
            p=new int;
        }
        A(int x, int y, int z){
            a=x;
            b=y;
            p=new int;
            *p=z;
        }
};

int main(){
    A o1, o2, o3(3,4,5);
    return 0;
}

