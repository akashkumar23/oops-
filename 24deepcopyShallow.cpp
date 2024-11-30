// copy is done by two types : default copy assingment operator
// by copy constructor

// shallow copy: 
//     Creating copy of object by 
//     copying data of all member variables as it is

// Deep Copy:
//     Creating an object by copying data of another 
//     object along with the values of memory resource 
//     reside outside the object but handles by that object

#include<bits/stdc++.h>
using namespace std;

class Dummy
{
    private:
        int a, b;
        int *p;
    public:
        void setData(int x, int y, int z){
            a = x; b = y;
            *p = z;
        }
        void showData(){
            cout<<a<<b;
        }
        Dummy(Dummy &d){
            //this is copy constructor
            a = d.a;
            b = d.b;
            // shallow copy
            // p = d.p;

            // below code should be written for deep copy
            p = new int;
            *p = *(d.p);        
        }

        
        Dummy(){
            // this is the default constructor
            p = new int;
        }
        ~Dummy(){
            // to release memory
            delete p;
        }
};

int main(){
    Dummy d1;
    d1.setData(3,4,10);
    Dummy d2 = d1; // copy constructuor // this is shallow copy //  this is the time when copy construcuot is called
    // d1 is passed is reference for the copy constructor
    // d2 = d1; // implicit copy assingment operator
    

    d2.showData();
    return 0;
}