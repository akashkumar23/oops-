// pure virtual function
// => A do nothing function is pure virtual function

// If a class has do nothing function 
// then we cannot make the object of that 
// class, but it may possible that that class has some 
// other member function which are not "do nothing"
// so to use those we make a child class and 
// also it it compulsory to override that 
// do nothing function in the child class


// A class containing any pure virtual 
// function is an abstract class

// We cannot instantiate abstract class



class Person
{
    public:
        virtual void fun()=0; // do nothing function PURE VIRTUAL FUNCTION
};
class Student : public Person{
    public:
        void fun()
        {
            ......;
        }
};













