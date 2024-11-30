// Member function of one class can become friend to another class
// class A{
//     public:
//         void fun()
//         {....}
            // void foo()
            // {
            //     .....
            // }
// };
// class B{
//     friend void A::fun();
//     // I there is no class scope resolution(A::) like then t
//     // this is assumed to be the below function (LINE 24)
//     // else it is the funtion of the respective class

        // friend void A::fun()
        // friend void A::foo()

        // friend class A ->  all member of class A will be friend function of class B

// };

// void fun(){


// }


