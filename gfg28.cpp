#include<bits/stdc++.h>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int i=0, int j=0):x(i),y(j) {}
        int getX() const { return x;}
        int getY() { return y;}
};

int main(){
   const Point t;
   cout<<t.getX()<<endl;
//    cout<<t.getY()<<endl; A const object cab only call const members (functions and data)
   return 0;
}

