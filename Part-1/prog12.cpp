#include <iostream>
#include <cmath>

using namespace std;


class methods {
	public:
	double radius, length, breadth, base, height;
double area(double radius) {
    return M_PI * radius * radius; // M_PI is the value of Pi from <cmath>
}

double area(double length, double breadth) {
    return length * breadth;
}

double area(double base, double height) {
    return 0.5 * base * height;
}
};

int main() {
    methods m1;

    // Circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << m1.area(radius)<< endl;

    // Rectangle
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle: " << m1.area(length, breadth) << endl;

    // Triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << m1.area(base, height) << endl;

    return 0;
}




