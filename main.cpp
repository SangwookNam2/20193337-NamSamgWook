#include <iostream>

void performOperation(int a, int b, char op) {
    switch (op) {
        case '+': std::cout << "Result: " << a + b << std::endl; break;
        case '-': std::cout << "Result: " << a - b << std::endl; break;
        case '*': std::cout << "Result: " << a * b << std::endl; break;
        case '/': 
            if (b != 0) {
                std::cout << "Result: " << a / b << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;
        default: std::cout << "Invalid operator!" << std::endl; break;
    }
}

int main() {
    int a, b;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter second number: ";
    std::cin >> b;

    performOperation(a, b, op);

    return 0;
}