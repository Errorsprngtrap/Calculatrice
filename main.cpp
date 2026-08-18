#include <iostream>

int main(int argc, char* argv[]) {
    float numberOne;
    float numberTwo;
    char operatorSign;
    bool continueLoop = true;

    std::cout << "Please enter a number" << std::endl;
    std::cin >> numberOne;

    if (std::cin.fail()) {
        std::cin.clear();
    }

    std::cout << "Please enter an operator" << std::endl;
    std::cin >> operatorSign;

    if (std::cin.fail()) {
        std::cin.clear();
    }

    std::cout << "Please enter a second number" << std::endl;
    std::cin >> numberTwo;

    if (std::cin.fail()) {
        std::cin.clear();
    }

    float result = 0;

    switch (operatorSign) {
        case '+':
            result = numberOne + numberTwo;
            break;
        case '-':
            result = numberOne - numberTwo;
            break;
        case '*':
            result = numberOne * numberTwo;
            break;
        case '/':
            if (numberTwo == 0) {
                std::cout << "Division by zero unable to do that" << std::endl;
            }else {
                result = numberOne / numberTwo;
            }
            break;
        default:
            std::cout << "Invalid operator" << std::endl;
            break;
    }

    std::cout << result << std::endl;

    return 0;
}