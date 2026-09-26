# Syntax, Variables and Data Types

This folder introduces the basic syntax used in C++ and explains how variables, constants, and data types are used to store and work with information.

The `main.cpp` file demonstrates variable declaration and initialization, common C++ data types, constants, output, and type conversion.

---

# 1. C++ Syntax

Syntax refers to the rules that determine how C++ code must be written.

For example:

```cpp
int age = 20;
```

This statement contains:

* `int` — data type
* `age` — variable name
* `=` — assignment operator
* `20` — value
* `;` — statement terminator

C++ is **case-sensitive**.

For example:

```cpp
int age = 20;
```

and:

```cpp
int Age = 20;
```

use two different variable names.

---

# 2. Statements

A statement is an instruction that tells the program to perform an operation.

Example:

```cpp
cout << age << endl;
```

Most C++ statements end with a semicolon:

```cpp
;
```

For example:

```cpp
int age = 20;
```

Forgetting the semicolon can result in a compilation error.

---

# 3. Variables

A variable is a named location in memory used to store a value.

Example:

```cpp
int age = 20;
```

Here:

* `int` is the data type.
* `age` is the variable name.
* `20` is the value stored in the variable.

The value of a variable can normally be changed during program execution.

Example:

```cpp
int age = 20;

age = 21;
```

The value of `age` changes from `20` to `21`.

---

# 4. Declaring a Variable

A variable can be declared without immediately assigning a value.

Example:

```cpp
int age;
```

This tells C++ that a variable named `age` will store an integer.

A variable can then be assigned a value:

```cpp
age = 20;
```

---

# 5. Initializing a Variable

Initialization means giving a variable its initial value when it is created.

Example:

```cpp
int age = 20;
```

The variable is both declared and initialized in the same statement.

Another example:

```cpp
double weight = 68.5;
```

---

# 6. Common C++ Data Types

A data type specifies what kind of value a variable can store.

Some common C++ data types include:

| Data Type | Purpose                                | Example |
| --------- | -------------------------------------- | ------- |
| `int`     | Whole numbers                          | `20`    |
| `float`   | Decimal numbers                        | `1.75f` |
| `double`  | Decimal numbers with greater precision | `68.5`  |
| `char`    | A single character                     | `'A'`   |
| `bool`    | True or false values                   | `true`  |

---

# 7. `int`

The `int` data type is used to store whole numbers.

Example:

```cpp
int age = 20;
```

Other examples:

```cpp
int students = 50;
int year = 2026;
int marks = 85;
```

An `int` does not normally store fractional values.

---

# 8. `float`

The `float` data type is used to store decimal numbers.

Example:

```cpp
float height = 1.75f;
```

The `f` indicates that the literal is a `float`.

Another example:

```cpp
float temperature = 25.5f;
```

---

# 9. `double`

The `double` data type is also used for decimal numbers.

Example:

```cpp
double weight = 68.5;
```

`double` generally provides greater precision than `float`.

Example:

```cpp
double price = 1250.75;
```

---

# 10. `char`

The `char` data type stores a single character.

Example:

```cpp
char grade = 'A';
```

A character is written using **single quotation marks**:

```cpp
'A'
```

For example:

```cpp
char letter = 'M';
```

This is different from:

```cpp
string name = "Michael";
```

because a `char` stores one character while a string stores a sequence of characters.

---

# 11. `bool`

The `bool` data type represents a logical value.

It can contain:

```cpp
true
```

or:

```cpp
false
```

Example:

```cpp
bool isStudent = true;
```

Boolean values are commonly used when making decisions in programs.

---

# 12. Constants

A constant is a value that cannot be changed after it has been initialized.

The `const` keyword is used to create a constant.

Example:

```cpp
const double PI = 3.14159;
```

After this statement, `PI` cannot be assigned another value.

For example, this would be invalid:

```cpp
PI = 3.14;
```

Constants are useful when a value should remain unchanged throughout the program.

---

# 13. Variable Naming

C++ has rules for naming variables.

A variable name:

* Can contain letters
* Can contain numbers
* Can contain underscores
* Cannot begin with a number
* Cannot contain spaces
* Cannot be a C++ keyword

Valid examples:

```cpp
int age;
int studentAge;
int student_age;
int age2;
```

Invalid examples:

```cpp
int 2age;
int student age;
```

It is also important to remember that C++ is case-sensitive:

```cpp
age
Age
AGE
```

are three different names.

---

# 14. Assignment

The assignment operator is:

```cpp
=
```

It assigns a value to a variable.

Example:

```cpp
int age;

age = 20;
```

The value `20` is assigned to `age`.

Assignment can also happen during declaration:

```cpp
int age = 20;
```

---

# 15. Type Conversion

Type conversion is the process of converting a value from one data type to another.

In `main.cpp`, an integer is converted to a `double`:

```cpp
int number = 10;

double convertedNumber = static_cast<double>(number);
```

The original value is:

```text
10
```

The converted value is stored as a `double`.

---

# 16. `static_cast`

C++ provides `static_cast` for explicit type conversions.

Example:

```cpp
double result = static_cast<double>(number);
```

This explicitly tells C++ to convert `number` into a `double`.

Another example:

```cpp
int number = 10;

double value = static_cast<double>(number);
```

---

# 17. Outputting Variables

Variables can be displayed using `cout`.

Example:

```cpp
int age = 20;

cout << "Age: " << age << endl;
```

The text:

```text
Age:
```

is displayed first, followed by the value stored in `age`.

Output:

```text
Age: 20
```

Multiple values can be displayed in the same statement:

```cpp
cout << "Age: " << age << endl;
```

---

# 18. Comments

Comments can be used to explain sections of code.

A single-line comment begins with:

```cpp
//
```

Example:

```cpp
// Variables
int age = 20;
```

The compiler ignores the comment.

Comments make code easier for programmers to understand and maintain.

---

# 19. Complete Program

The `main.cpp` file contains:

```cpp
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
```

---

# 🖥️ Expected Output

When the program is compiled and executed, the output will be similar to:

```text
Age: 20
Height: 1.75
Weight: 68.5
Grade: A
Student: 1
PI: 3.14159
Original number: 10
Converted number: 10
```

The `bool` value `true` is displayed as `1` by default.

---

# 🧪 What I Practiced

In `main.cpp`, I practiced:

* Understanding basic C++ syntax
* Declaring variables
* Initializing variables
* Using different data types
* Using `int`
* Using `float`
* Using `double`
* Using `char`
* Using `bool`
* Creating constants with `const`
* Assigning values
* Displaying variables with `cout`
* Converting data types
* Using `static_cast`
* Using comments

---

# 📖 Important Concepts Learned

| Concept       | Purpose                                    |
| ------------- | ------------------------------------------ |
| Syntax        | Rules for writing valid C++ code           |
| Variable      | Stores a value that can change             |
| Data type     | Defines the type of data a variable stores |
| `int`         | Stores whole numbers                       |
| `float`       | Stores decimal numbers                     |
| `double`      | Stores more precise decimal numbers        |
| `char`        | Stores one character                       |
| `bool`        | Stores `true` or `false`                   |
| `const`       | Creates a value that cannot be changed     |
| `=`           | Assigns a value                            |
| `static_cast` | Performs explicit type conversion          |
| `cout`        | Displays output                            |
| `;`           | Terminates a statement                     |
| `//`          | Creates a comment                          |

---

# 🔑 Key Takeaways

1. C++ has specific syntax rules that must be followed.
2. Variables are used to store values.
3. Every variable has a data type.
4. `int` stores whole numbers.
5. `float` and `double` store decimal values.
6. `char` stores a single character.
7. `bool` stores a logical value.
8. `const` can be used to create constants.
9. `static_cast` can explicitly convert one data type into another.
10. C++ is case-sensitive.
11. Most C++ statements end with a semicolon.
12. Meaningful variable names make programs easier to understand.

---

## 📁 Folder Contents

```text
02-syntax-variables-and-data-types/
├── main.cpp
└── README.md
```

`main.cpp` contains the practical examples, while this `README.md` explains the syntax, variables, data types, constants, and type conversion demonstrated in the program.
