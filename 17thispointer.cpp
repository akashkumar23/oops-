// Object pointer : A pointer contain address of an 
// object is called Object pointer
/*
#include<bits/stdc++.h>
using namespace std;

class Box
{
    private:
        int l,b,h;
    public:
        void setDimension(int x, int y, int z){
            l = x;
            b = y;
            h = z;
        }
        void showDimension(){
            cout<<l<<" "<<b<<" "<<h;
        }
};

int main(){
    Box smallbox;
    // smallbox.setDimension(10,20,5);
    // smallbox.showDimension();

    Box *p; // p is a block pointer
    p = &smallbox; // p is keeping the address of smallbox object
    p->setDimension(10,20,5);
    p->showDimension();


    return 0;
}
*/


// thisPointer
#include<bits/stdc++.h>
using namespace std;

class Box
{
    private:
        int l,b,h;
    public:

// this is a keyword

// this is a local object pointer in every 
// instance memeber function containing address of the caller object

// this pointer cannot be modified

// It is used to refer caller object in the member function

        void setDimension(int l, int b, int h){
            // "smallbox" below in the main function 
            // is the caller object of this instance member function
            // "this" pointer contain the address of smallbox object
            
            this->l = l;
            this->b = b;
            this->h = h;
        }
        void showDimension(){
            cout<<l<<" "<<b<<" "<<h;
        }
};

int main(){
    Box smallbox, smallbox2;
    smallbox.setDimension(10,20,5);
    smallbox.showDimension();
    smallbox2.setDimension(5,6,2);
    smallbox2.showDimension();
    return 0;
}