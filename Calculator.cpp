#include <iostream>

using namespace std;

int main()
{
    int firstNumber;
    string operatorNumbers;
    int secondNumber;

    cout << "Welcome to my Calculator!\n"
            "This is only for improving my C++ skills.\n\n"
            "Enter a number\n";
    cin >> firstNumber;
    cout << "\n";
    cout << "Enter an Operator\n";
    cout << "Example: +\n";
    cin >> operatorNumbers;
    cout << "\n";
    cout << "Enter a second number\n";
    cin >> secondNumber;
    cout << "\n";
    cout << "Calculating...\n";

    if (operatorNumbers == "x")
    {
        cout << firstNumber * secondNumber;
    }

    if (operatorNumbers == "/")
    {
        cout << firstNumber / secondNumber;
    }

    if (operatorNumbers == "+")
    {
        cout << firstNumber + secondNumber;
    }

    if (operatorNumbers == "-")
    {
        cout << firstNumber - secondNumber;
    }

    return EXIT_SUCCESS;
}
