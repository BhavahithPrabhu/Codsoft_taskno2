#include <iostream>

void add();
void sub();
void multi();
void division();
void exitProgram();

int main() {
    int opr;

    do {
        std::cout << "Select an operation from the C++ Calculator done by Bhavahith Prabhu\n"
                     "1 = Addition\n"
                     "2 = Subtraction\n"
                     "3 = Multiplication\n"
                     "4 = Division\n"
                     "5 = Exit\n\n"
                     "Make a choice: ";
        std::cin >> opr;

        switch (opr) {
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                multi();
                break;
            case 4:
                division();
                break;
            case 5:
                exitProgram();
                break;
            default:
                std::cout << "Something is wrong..!!" << std::endl;
                break;
        }

        std::cout << "------------------------------\n";
    } while (opr != 5);

    return 0;
}

void add() {
    int n, sum = 0, number;

    std::cout << "How many numbers do you want to add: ";
    std::cin >> n;
    std::cout << "Please enter the numbers one by one:\n";

    for (int i = 1; i <= n; i++) {
        std::cin >> number;
        sum += number;
    }

    std::cout << "Sum of the numbers = " << sum << std::endl;
}

void sub() {
    int num1, num2, z;

    std::cout << "Enter the First number: ";
    std::cin >> num1;
    std::cout << "Enter the Second number: ";
    std::cin >> num2;

    z = num1 - num2;
    std::cout << "Subtraction of the numbers = " << z << std::endl;
}

void multi() {
    int num1, num2, mul;

    std::cout << "Enter the First number: ";
    std::cin >> num1;
    std::cout << "Enter the Second number: ";
    std::cin >> num2;

    mul = num1 * num2;
    std::cout << "Multiplication of the numbers = " << mul << std::endl;
}

void division() {
    int num1, num2, div = 0;

    std::cout << "Enter the First number: ";
    std::cin >> num1;
    std::cout << "Enter the Second number: ";
    std::cin >> num2;

    while (num2 == 0) {
        std::cout << "Divisor cannot be zero.\nPlease enter the divisor again: ";
        std::cin >> num2;
    }

    div = num1 / num2;
    std::cout << "Division of the numbers = " << div << std::endl;
}

void exitProgram() {
    std::cout << "Exiting the program." << std::endl;
    exit(0);
}