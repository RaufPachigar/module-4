#include <iostream>
using namespace std;

class Calculator {
private:
    float num1, num2;

public:
    Calculator(float n1, float n2) {
        num1 = n1;
        num2 = n2;
    }

    float add() {
        return num1 + num2;
    }

    float subtract() {
        return num1 - num2;
    }

    float multiply() {
        return num1 * num2;
    }

    float divide() {
        
            return num1 / num2;
        
    }
};

int main() {
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Calculator calculator(num1, num2);

    cout << "Sum: " << calculator.add() << endl;
    cout << "Difference: " << calculator.subtract() << endl;
    cout << "Product: " << calculator.multiply() << endl;
    cout << "Quotient: " << calculator.divide() << endl;

    return 0;
}
