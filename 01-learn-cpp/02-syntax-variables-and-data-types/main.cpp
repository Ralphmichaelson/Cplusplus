#include <iostream>

using namespace std;

int main()
{
    // Variables
    int age = 20;
    float height = 1.75f;
    double weight = 68.5;
    char grade = 'A';
    bool isStudent = true;

    // Constant
    const double PI = 3.14159;

    // Display values
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student: " << isStudent << endl;
    cout << "PI: " << PI << endl;

    // Type conversion
    int number = 10;
    double convertedNumber = static_cast<double>(number);

    cout << "Original number: " << number << endl;
    cout << "Converted number: " << convertedNumber << endl;

    return 0;
}