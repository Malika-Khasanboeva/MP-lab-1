// Malika Xasanboyeva 220106
// 2.09.2025  | Tuesday 14:00
// Main Function


// 1.
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Number of arguments: " << argc << endl;
    
    for (int i = 0; i < argc; i++) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }
    return 0;
}

/*  
2.
'main' is the entry point of a program. Execution starts from main.

Why static in Java:
In Java, no objects exist before the program starts. Declaring main as static lets the JVM call it without creating an object of the class.



3. 
C++ uses int main(int argc, char* argv[]). Java uses public static void main(String[] args). C++ returns an int, Java returns nothing, and Java’s main must be public static.


4.
In C++, return value signals success (0) or error (non-zero) to the OS. In Java, main returns void, but you can exit with a non-zero status using System.exit(code)



*/
