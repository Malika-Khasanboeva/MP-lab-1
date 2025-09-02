// Malika Xasanboyeva 220106
// 2.09.2025  | Tuesday 14:00
// Mixins


// 1.
#include <iostream>
#include <string>
using namespace std;

class IStringable {
public:
    virtual string toString() const = 0;
    virtual ~IStringable() = default;
};

class Printable {
public:
    void print(const IStringable& obj) {
        cout << obj.toString() << endl;
    }
};

class Book : public IStringable {
private:
    string title, author;
public:
    Book(string t, string a) : title(t), author(a) {}
    string toString() const override {
        return "'" + title + "' by " + author;
    }
};

int main() {
    Book myBook("The Hobbit", "J.R.R. Tolkien");
    Printable p;
    p.print(myBook);
    return 0;
}






/*

2.
They add reusable behavior to classes without enforcing a rigid “is-a” inheritance 
chain. This promotes flexibility and avoids deep hierarchies.


3. 
Interfaces in Java can provide concrete method implementations with default. 
Classes that implement the interface automatically inherit these methods, 
similar to mixin behavior.

4.
Inheritance: simple, but rigid and can lead to deep hierarchies.

Composition: more flexible, promotes “has-a” relationships.

Mixins/interfaces: add reusable behavior across unrelated classes, 
but can introduce complexity or conflicts if overused.

*/
