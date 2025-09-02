// Malika Xasanboyeva 220106
// 2.09.2025  | Tuesday 14:00
// Enums


// 1.
#include <iostream>
#include <string>
using namespace std;

enum class Season { SPRING, SUMMER, AUTUMN, WINTER };

string recommendActivity(Season currentSeason) {
    switch (currentSeason) {
        case Season::SPRING: return "Plant flowers";
        case Season::SUMMER: return "Go to the beach";
        case Season::AUTUMN: return "Rake leaves";
        case Season::WINTER: return "Build a snowman";
        default: return "Rest";
    }
}

int main() {
    Season now = Season::AUTUMN;
    cout << "It's autumn! Let's: " << recommendActivity(now) << endl;
    return 0;
}





/*

2.
They prevent mistakes compared to using strings or integers, give meaningful 
names, and group related values clearly.


3. 
Enums ensure only valid values can be used, making code safer and easier to read. 
The names explain the meaning instead of magic numbers.

4.
C++ scoped enums (enum class) are type-safe but limited: they hold named constants.
Java enums are more powerful: they can have fields, methods, and constructors, acting 
almost like special classes.
Old C-style enums in C++ weren’t type-safe (could mix with ints), but scoped enums fix that.


*/
