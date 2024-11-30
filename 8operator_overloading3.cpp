#include<bits/stdc++.h>
using namespace std;

class Integer
{
    private:
        int a;
    public:
        void setdata(int x){
            a = x;
        }
        void showdata(){
            cout<<a;
        }
        Integer operator++(){
            // preincrement
            Integer i;
            i.a = ++a;
            return i;
        }
        Integer operator++(int){
            // post argument
            // we have passed the int as an argumet so that the compiler know that it is overloading of post 
            Integer i;
            i.a = a++;
            return i;

        }
};

int main(){
    Integer i1,i2;
    i1.setdata(5);
    i1.showdata();
    // i2 = ++i1;
    i2 = i1++;
    i1.showdata();
    i2.showdata();
    return 0;
}