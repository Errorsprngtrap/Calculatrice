#include <iostream>

double forceAnswer() {
    bool goodAnswer = false;
    double answer;
    while (!goodAnswer) {
        std::cout << "Please enter a number" << std::endl;
        std::cin >> answer;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
        }else {
            goodAnswer = true;
        }
    }

    return answer;

}

char forceOperatorAnswer() {
    bool goodAnswer = false;
    char answer;
    while (!goodAnswer) {
        std::cout << "Please enter an operator" << std::endl;
        std::cin >> answer;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
        }else {
            goodAnswer = true;
        }
    }

    return answer;
}

int main(int argc, char* argv[]) {
    bool continueLoop = true;

    while (continueLoop) {
        double numberOne = forceAnswer();
        double numberTwo = forceAnswer();
        char operatorSign = forceOperatorAnswer();

        double result;

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

        std::cout << "Press y if you want to do more maths" << std::endl;

        char userSelection;
        std::cin >> userSelection;

        if  (tolower(userSelection) != 'y') {
            continueLoop = false;
        }

    }

    // float numberOne;
    // float numberTwo;
    // char operatorSign;
    // bool continueLoop = true;
    //
    // std::cout << "Please enter a number" << std::endl;
    // std::cin >> numberOne;
    //
    // if (std::cin.fail()) {
    //     std::cin.clear();
    // }
    //
    // std::cout << "Please enter an operator" << std::endl;
    // std::cin >> operatorSign;
    //
    // if (std::cin.fail()) {
    //     std::cin.clear();
    // }
    //
    // std::cout << "Please enter a second number" << std::endl;
    // std::cin >> numberTwo;
    //
    // if (std::cin.fail()) {
    //     std::cin.clear();
    // }
    //
    // float result = 0;
    //
    // switch (operatorSign) {
    //     case '+':
    //         result = numberOne + numberTwo;
    //         break;
    //     case '-':
    //         result = numberOne - numberTwo;
    //         break;
    //     case '*':
    //         result = numberOne * numberTwo;
    //         break;
    //     case '/':
    //         if (numberTwo == 0) {
    //             std::cout << "Division by zero unable to do that" << std::endl;
    //         }else {
    //             result = numberOne / numberTwo;
    //         }
    //         break;
    //     default:
    //         std::cout << "Invalid operator" << std::endl;
    //         break;
    // }
    //
    // std::cout << result << std::endl;
    //
    // return 0;
}