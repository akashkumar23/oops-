// We know that cosntructor invoked implicitely 
// when an object is created.

// In heritence, when we create object of derived class, 
// will happen

//  When an object is created for a child class, Memory is allocated to memeber
//  variables of both child class and parent class

// constructor calling order child to parent
// constructor executing order parent to child

// Destructor execuring order child to parent

// we have to make constructor in child class if
// there is parameterized constructor in parent class

class A
{
    int a;
    public:
        A(int k) // parameterised constructor
        {
            a=k;
        }
        ~A()
        {

        }
};

class B: public A
{
    int b;
    public:
        B(int x, int y):A(x)
        {b=y;}
        ~B(){

        }
};
void main(){
    B obj(2,3); 
    // number of parameter passed should be equal to total numner of member variables 
    // in parent and child member variables
}