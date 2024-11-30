// it can be done by
// -> Conversion through constructor
// -> Conversion through casting operator

#include<bits/stdc++.h>
using namespace std;

class Product{
    private:
        int m,n;
    public:
        void set(int x, int y){
            m=x;
            n=y;
        }
        void show(){
            cout<<m<<" "<<n;
        }
        int getM(){return m;}
        int getN(){return n;}
};

class Item{
    private:
        int a,b;
    public:
        void show(){
            cout<<a<<" "<<b;
        }
        // default constructor
        Item (){}

        // Constrctor for copying
        Item(Product &p){
            a = p.getM();
            b = p.getN();
        }
       
};



int main(){
    
    Item i1;
    Product p1;
    p1.set(3,4);
    i1=p1;
    p1.show();
    i1.show();
    return 0;
}