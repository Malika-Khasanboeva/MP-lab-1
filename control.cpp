// Malika Xasanboyeva 220106
// 2.09.2025  | Tuesday 14:00
// Control Flow


// 1.
#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 1, nextTerm;
    cout << "First 10 Fibonacci numbers: ";
    for (int i = 1; i <= 10; i++) {
        if (i == 1) { cout << n1 << " "; continue; }
        if (i == 2) { cout << n2 << " "; continue; }
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
        cout << nextTerm << " ";
    }
    cout << endl;
    return 0;
}



/*

2.
A while loop checks the condition before running, so it may not execute at all.
A do-while loop checks the condition after running, so it always executes at least once.


3. 
A switch chooses one block of code to run based on a variable’s value.
- case matches specific values.
- break ends execution of that case.
- default runs if no cases match.

4.
With &&, if the first condition is false, the second is not checked.
With ||, if the first condition is true, the second is not checked.


*/
