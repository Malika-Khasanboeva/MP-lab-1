// Malika Xasanboyeva 220106
// 2.09.2025  | Tuesday 14:00
// Polymorphism


// 1.
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Shape {
public:
    virtual double getArea() const = 0; // pure virtual
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
    double w, h;
public:
    Rectangle(double width, double height) : w(width), h(height) {}
    double getArea() const override { return w * h; }
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) : r(radius) {}
    double getArea() const override { return 3.14159 * r * r; }
};

int main() {
    vector<unique_ptr<Shape>> shapes;
    shapes.push_back(make_unique<Rectangle>(10, 5));
    shapes.push_back(make_unique<Circle>(3));

    for (const auto& shape : shapes) {
        cout << "Area: " << shape->getArea() << endl;
    }
    return 0;
}






/*

2.
Compile-time (static): decided during compilation. Example → function overloading 
or operator overloading.

Runtime (dynamic): decided while running, usually with virtual methods. 
Example → overriding getArea() in Shape.


3. 
Abstract class: can have both normal and pure virtual methods; used when classes
share behavior + need polymorphism.

Interface (Java) / fully abstract class (C++): all methods are abstract (pure 
virtual). Used when only a contract is needed, no shared implementation.

4.
They define a common contract. Different classes implement/override the methods, 
and code can treat them uniformly through base references or pointers.

*/
