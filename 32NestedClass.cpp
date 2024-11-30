// Class inside a class is called nested class

// A nested class is a member and as such has 
// the same access rights as any other member

// The members of an enclosing class have no
// special access to members of a nested class;
// the usual access rule shall be  obeyed

#include<bits/stdc++.h>
using namespace std;


class Student
{
    private:
        int rollno;
        char name[20];
        class Address
        {
            private:
                int houseno;
                char street[20];
                char city[20];
                char state[20];
                char pincode[7];
            public:
                void setAddressN(int h, char *s, char *c, char *st, char *p){
                    houseno = h;
                    strcpy(street, s);
                    strcpy(city, c);
                    strcpy(state, st);
                    strcpy(pincode, p);
                }
                void showAddressN(){
                    cout<<houseno<<" "<<street<<" "<<city<<" "<<state<<" "<<pincode;
                }
        
        };
        Address add;
    public: 
        void setRollno(int r){
            rollno = r;
        }
        void setName(char *n){
            strcpy(name, n);
        }
        void setAddress(int h, char *s, char *c, char *st, char *p){
            add.setAddressN(h,s,c,st,p);
        }
        void showStudent()
        {
            cout<<"Student Data"<<endl;
            cout<<rollno<<endl;
            cout<<name<<endl;
            add.showAddressN();
        }
};

int main(){
    Student s;
    s.setName("Akash");
    s.setRollno(83);
    s.setAddress(301,"IIT ISM", "Dhanbad", "828305", "Jharkhand");
    s.showStudent();
}


