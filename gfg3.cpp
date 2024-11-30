#include<bits/stdc++.h>
using namespace std;

class Point{
    Point(){
        cout<<"Constructor called";
    }
};

int main(){
    Point t1;
    return 0;
}
/*the above code will gicve Compilation error
as Point constructor in private by default as no access 
specifier is mentioned and we are trying to access private member outside
*/