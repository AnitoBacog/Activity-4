#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Enter two numbers and an operator (+, -, *, /): ";
    cin >> num1 >> num2 >> op;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero!" << endl;
                return 1; // Indicate an error
            }
            result = num1 / num2;
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            return 1; // Indicate an error
    }

    cout << "Result: " << result << endl;
    return 0;
}
