#include<bits/stdc++.h>
using namespace std;

class Point{
    public:
        Point(){
            cout<<"Normal constructor"<<endl;
        }
        Point(const Point &t){
            cout<<"Copy constructor"<<endl;
        }
};

int main(){

    Point *t1, *t2; // No constructor
    t1 = new Point(); //Normal constructor
    t2 = new Point(*t1); // copy constructor
    Point t3 = *t1; // copy constructor
    Point t4; // normal constructor
    t4 = t3; // assign operator
    return 0;
}