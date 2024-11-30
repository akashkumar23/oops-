// Declared inside the class bodyA
// Also known as class member variable
// They must be defined outside the class
// Static member variable does not belong to any object, but to the whole calss
// There will be only one copy of static member variable for the whole class
// Any object can use the same of class variable
// they can allso be used with class name
// they are qualified with the keyword static
// they are also called class member functions
// they can be inovjed with or without object
// they can only acess static members of the class

#include<bits/stdc++.h>
using namespace std;


class Account
{

    private:
        int balance; // instance member variable
        static float roi; // static member variable / class variable
    
    public:
        void set_balance(int x){
            balance = x;
        }
        void show_balance(){
            cout<<balance;
        }
        // static member functions
        static void show_roi(){
            cout<<roi;
        }
        static void set_roi(float x){
            roi = x;
        }

};

// this is how SMV is defined outside the class
float Account:: roi = 3.5f;


int main(){
    // if no object of the Account class is created, then to access the SMV of the Account class
    // we use the below syntax 
    Account::set_roi(3.1f);
    Account::show_roi();
    return 0;
}