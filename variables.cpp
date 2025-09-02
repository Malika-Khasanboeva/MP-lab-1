// Malika Xasanboyeva 220106
// 2.09.2025  | Tuesday 14:00
// Variables


// 1.
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}


/*

2.
Primitives (int, double) store actual values directly in memory. Reference types 
(objects, pointers) store memory addresses that point to the data.


3. 
Scope means where a variable can be accessed. Local scope = inside a function/method, 
only usable there. Class/static scope = tied to a class or declared static, accessible 
across methods.

4.
Statically typed means variable types are checked at compile time and must be 
declared before use. Dynamic typing (like in Python/JavaScript) decides types at 
runtime and allows changing them freely.


*/
