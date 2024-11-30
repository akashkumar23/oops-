//  Base class pointers can point to any of its descendant class
//  but its reverse is not true

class A{
    public:
        virtual void f1(){.....} // <------ here
};
class B: public A{
    public:
        void f2(){.....} // function overriding+ 
};
void main(){
    A *p, o1;
    B o2;
    p = &o1; or p = &o2
    o2.f1() // B as expected
    p->f1() // A issue 
    // due to early binding(compiler) , bcoz in EB we see the pointer ka type not the address of the onject which is 
    // stored in the pointer
    // pointer mein address runtime mein allocate hota hai
    // to do late binding we write keyword "virtual before function type in parent class"

}