#include <iostream>
#include <algorithm>
char operatorList[4] = {
    '+',
    '-',
    '/',
    '*'
};


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
            if (std::find(std::begin(operatorList), std::end(operatorList), answer) != std::end(operatorList)) {
                goodAnswer = true;
            } else {
                std::cout << "Invalid answer" << std::endl;
                std::cin.clear();
                std::cin.ignore();
            }
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
        bool errorSkipped = false;

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
                errorSkipped = true;
                break;
        }

        if (errorSkipped == false)  {
            std::cout << result << std::endl;
        }

        std::cout << "Press y if you want to do more maths" << std::endl;

        char userSelection;
        std::cin >> userSelection;

        if  (tolower(userSelection) != 'y') {
            continueLoop = false;
        }

    }
}