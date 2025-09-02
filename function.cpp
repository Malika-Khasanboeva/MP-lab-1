// Malika Xasanboyeva 220106
// 2.09.2025  | Tuesday 14:00
// Functions / Methods


// 1.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &str) {
    return equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}

int main() {
    cout << (isPalindrome("madam") ? "true" : "false") << endl;
    cout << (isPalindrome("hello") ? "true" : "false") << endl;
    return 0;
}




/*

2.
In C++, you can pass by value (copy), by pointer (address), or by reference (alias to original).

In Java, everything is pass-by-value. For primitives, the value itself is copied. 
For objects, the reference is copied, so methods can change the object’s contents 
but not the reference itself.


3. 
Function/method overloading means multiple functions with the same name but 
different parameter lists. The difference must be in number or types of parameters. 
Return type alone is not enough.

4.
Recursion is when a function calls itself. A base case is the stopping condition 
that ends recursion. Without it, the function would call itself forever and cause a crash.


*/
