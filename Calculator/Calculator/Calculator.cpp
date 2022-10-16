#include <iostream>

using namespace std;

int main()
{
    double firstNumber;
    string operatorNumbers;
    double secondNumer;

    cout << "Welcome to my Calculator!\n"
            "This is only for improving my C++ skills.\n"
            "Enter a number\n";
    cin >> firstNumber;
    cout << "Do you want to Multiply, Divide, Plus or Minus?\n";
    cout << "Example: plus\n";
    cin >> operatorNumbers;
    cout << "Enter a second number\n";
    cin >> secondNumer;
    cout << "Calculating...\n";

    if (operatorNumbers == "multiply")
    {
        double multipliedNumber = firstNumber * secondNumer;
        cout << multipliedNumber;
    }

    if (operatorNumbers == "divide")
    {
        double dividedNumber = firstNumber / secondNumer;
        cout << dividedNumber;
    }

    if (operatorNumbers == "plus")
    {
        double plusNumber = firstNumber + secondNumer;
        cout << plusNumber;
    }

    if (operatorNumbers == "minus")
    {
        double minusNumber = firstNumber - secondNumer;
        cout << minusNumber;
    }

    return EXIT_SUCCESS;
}
