#include <iostream>
using namespace std;

inline int multiply(int x, int y) {
    return x * y;
}

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Multiplication Values:\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << multiply(num, i) << endl;
    }

    cout << "\nCubic Values:\n";
    cout << num << "^3 = " << cube(num) << endl;

    return 0;
}
