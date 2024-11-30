#include<bits/stdc++.h>
using namespace std;

Which of the following overloaded functions are NOT allowed in c++?

1. int fun(int x, int y);
   void fun(int x, int y);

2. fun(int x, int y);
   static int fun(int x, int y);

3. int fun(int *ptr, int n);
   int fun(int ptr[], int n);

4. int fun(int x, int y);
   int fun(int x, int y=10);

   Non of the above functions are overloaded in c++.
   The only way to distinguish between overloaded functions/methods is virtual
   the argument list.
   All of the examples have same parameter list(p* and p[] are same)