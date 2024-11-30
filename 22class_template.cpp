#include<bits/stdc++.h>
using namespace std;

class ArrayList
{
    private:
        struct ControlBlock
        {
            int capacity;
            int *arr_ptr;
        };
        ControlBlock *s;
    public:
        ArrayList(int capacity)
        {
            s = new ControlBlock;
            s->capacity = capacity;
            s->arr_ptr = new int[s->capacity];
        }
        
};

int main(){

    return 0;
}