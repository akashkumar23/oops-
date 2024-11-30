// If we want to change the implementation of a 
// service of the parent class then we use method overriding
// in the child class by early binding

class Car
{
    public:
        void shiftGear(){...}
        void f2(){...}
};
class SportsCar: public Car
{
    void shiftGear(){...} // method overriding
    void f2(int k){...} //Method Hiding
};

void main()
{
    SportsCar obj;
    obj.shiftGear(); // SportsCar
    obj.f2()// error
    obj.f2(6)// Sportscar

}