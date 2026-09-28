#include <iostream>

using namespace std;

int main()
{
    // Input
    int firstNumber;
    int secondNumber;

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    // Arithmetic operators
    int sum = firstNumber + secondNumber;
    int difference = firstNumber - secondNumber;
    int product = firstNumber * secondNumber;
    int quotient = firstNumber / secondNumber;
    int remainder = firstNumber % secondNumber;

    cout << "\nArithmetic Results" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    // Relational operators
    cout << "\nRelational Results" << endl;
    cout << "First number == second number: "
         << (firstNumber == secondNumber) << endl;

    cout << "First number != second number: "
         << (firstNumber != secondNumber) << endl;

    cout << "First number > second number: "
         << (firstNumber > secondNumber) << endl;

    cout << "First number < second number: "
         << (firstNumber < secondNumber) << endl;

    // Logical operators
    bool bothPositive = firstNumber > 0 && secondNumber > 0;
    bool atLeastOnePositive = firstNumber > 0 || secondNumber > 0;
    bool firstNotPositive = !(firstNumber > 0);

    cout << "\nLogical Results" << endl;
    cout << "Both numbers are positive: " << bothPositive << endl;
    cout << "At least one number is positive: " << atLeastOnePositive << endl;
    cout << "First number is not positive: " << firstNotPositive << endl;

    // Assignment operators
    int value = firstNumber;

    value += secondNumber;

    cout << "\nAssignment Result" << endl;
    cout << "After += : " << value << endl;

    return 0;
}