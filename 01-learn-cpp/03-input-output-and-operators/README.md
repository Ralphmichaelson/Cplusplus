# Input, Output and Operators

This folder introduces input and output in C++ and explains the main operators used to perform calculations, comparisons, logical operations, and assignments.

The `main.cpp` file demonstrates how to receive input using `cin`, display output using `cout`, and use different types of C++ operators.

---

# 1. Output in C++

Output is the process of displaying information to the user.

C++ uses `cout` to display output.

Example:

```cpp
cout << "Hello, C++!";
```

The insertion operator:

```cpp
<<
```

is used to send information to `cout`.

---

# 2. Input in C++

Input is the process of receiving information from the user.

C++ uses `cin` to receive input.

Example:

```cpp
int age;

cin >> age;
```

The extraction operator:

```cpp
>>
```

is used to receive data through `cin`.

---

# 3. Using `cin` and `cout` Together

Input and output can be combined in a program.

Example:

```cpp
int age;

cout << "Enter your age: ";
cin >> age;

cout << "Your age is: " << age << endl;
```

The program:

1. Displays a message.
2. Waits for the user to enter a value.
3. Stores the value in `age`.
4. Displays the value entered.

---

# 4. Arithmetic Operators

Arithmetic operators are used to perform mathematical calculations.

| Operator | Meaning        | Example |
| -------- | -------------- | ------- |
| `+`      | Addition       | `a + b` |
| `-`      | Subtraction    | `a - b` |
| `*`      | Multiplication | `a * b` |
| `/`      | Division       | `a / b` |
| `%`      | Modulus        | `a % b` |

Example:

```cpp
int a = 10;
int b = 3;

cout << a + b << endl;
cout << a - b << endl;
cout << a * b << endl;
cout << a / b << endl;
cout << a % b << endl;
```

---

# 5. Addition

The `+` operator adds two values.

```cpp
int a = 10;
int b = 3;

int sum = a + b;
```

The value of `sum` becomes:

```text
13
```

---

# 6. Subtraction

The `-` operator subtracts one value from another.

```cpp
int difference = a - b;
```

If:

```text
a = 10
b = 3
```

the result is:

```text
7
```

---

# 7. Multiplication

The `*` operator multiplies values.

```cpp
int product = a * b;
```

For:

```text
a = 10
b = 3
```

the result is:

```text
30
```

---

# 8. Division

The `/` operator performs division.

```cpp
int result = a / b;
```

When both operands are integers, integer division is performed.

For example:

```cpp
int result = 10 / 3;
```

produces:

```text
3
```

The decimal portion is discarded because the result is stored as an integer.

---

# 9. Modulus Operator

The `%` operator returns the remainder after division.

Example:

```cpp
int remainder = 10 % 3;
```

The result is:

```text
1
```

because:

```text
10 ÷ 3 = 3 remainder 1
```

The modulus operator is commonly useful for checking whether a number is even or odd.

Example:

```cpp
if (number % 2 == 0)
```

---

# 10. Relational Operators

Relational operators compare two values.

| Operator | Meaning                  |
| -------- | ------------------------ |
| `==`     | Equal to                 |
| `!=`     | Not equal to             |
| `>`      | Greater than             |
| `<`      | Less than                |
| `>=`     | Greater than or equal to |
| `<=`     | Less than or equal to    |

Example:

```cpp
int a = 10;
int b = 5;

cout << (a > b) << endl;
```

The result is:

```text
1
```

because `10` is greater than `5`.

---

# 11. Equality Operator `==`

The `==` operator checks whether two values are equal.

Example:

```cpp
int a = 10;
int b = 10;

cout << (a == b);
```

The result is:

```text
1
```

The `==` operator should not be confused with the assignment operator:

```cpp
=
```

### Assignment

```cpp
a = 10;
```

assigns a value.

### Comparison

```cpp
a == 10;
```

checks whether the value is equal to `10`.

---

# 12. Logical Operators

Logical operators are used to combine or modify conditions.

| Operator | Meaning     |   |            |
| -------- | ----------- | - | ---------- |
| `&&`     | Logical AND |   |            |
| `        |             | ` | Logical OR |
| `!`      | Logical NOT |   |            |

---

# 13. Logical AND `&&`

The `&&` operator returns true when both conditions are true.

Example:

```cpp
int age = 20;

cout << (age >= 18 && age <= 30);
```

Both conditions must be true.

---

# 14. Logical OR `||`

The `||` operator returns true when at least one condition is true.

Example:

```cpp
int age = 20;

cout << (age < 18 || age > 60);
```

The entire expression is true if either condition is true.

---

# 15. Logical NOT `!`

The `!` operator reverses a logical value.

Example:

```cpp
bool isStudent = true;

cout << !isStudent;
```

The result becomes false.

---

# 16. Assignment Operators

Assignment operators are used to assign or modify values.

The basic assignment operator is:

```cpp
=
```

Example:

```cpp
int number = 10;
```

C++ also provides compound assignment operators.

| Operator | Example  | Meaning             |
| -------- | -------- | ------------------- |
| `=`      | `a = 5`  | Assign              |
| `+=`     | `a += 5` | Add and assign      |
| `-=`     | `a -= 5` | Subtract and assign |
| `*=`     | `a *= 5` | Multiply and assign |
| `/=`     | `a /= 5` | Divide and assign   |
| `%=`     | `a %= 5` | Modulus and assign  |

Example:

```cpp
int number = 10;

number += 5;
```

The value of `number` becomes:

```text
15
```

---

# 17. Increment Operator

The increment operator:

```cpp
++
```

increases a value by one.

Example:

```cpp
int number = 5;

number++;
```

The value becomes:

```text
6
```

---

# 18. Decrement Operator

The decrement operator:

```cpp
--
```

decreases a value by one.

Example:

```cpp
int number = 5;

number--;
```

The value becomes:

```text
4
```

---

# 19. Operator Precedence

When an expression contains multiple operators, C++ follows rules that determine which operation is performed first.

For example:

```cpp
int result = 10 + 5 * 2;
```

Multiplication is performed before addition.

Therefore:

```text
5 × 2 = 10
10 + 10 = 20
```

So:

```text
result = 20
```

Parentheses can be used to control the order:

```cpp
int result = (10 + 5) * 2;
```

Now addition happens first:

```text
15 × 2 = 30
```

---

# 20. Complete Program

The practical program in `main.cpp` demonstrates input, output, arithmetic operators, relational operators, logical operators, and assignment operators.

A typical example is:

```cpp
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\nArithmetic Operators" << endl;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Remainder: " << a % b << endl;

    cout << "\nRelational Operators" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;

    cout << "\nLogical Operators" << endl;
    cout << "(a > 0 && b > 0): " << (a > 0 && b > 0) << endl;
    cout << "(a > 0 || b > 0): " << (a > 0 || b > 0) << endl;
    cout << "!(a > 0): " << !(a > 0) << endl;

    cout << "\nAssignment Operators" << endl;

    int number = a;

    number += b;
    cout << "After += : " << number << endl;

    number -= b;
    cout << "After -= : " << number << endl;

    number *= b;
    cout << "After *= : " << number << endl;

    return 0;
}
```

---

# 🧪 What I Practiced

In `main.cpp`, I practiced:

* Displaying output using `cout`
* Receiving input using `cin`
* Using the insertion operator `<<`
* Using the extraction operator `>>`
* Performing addition
* Performing subtraction
* Performing multiplication
* Performing division
* Finding remainders using `%`
* Comparing values
* Using relational operators
* Using logical operators
* Using assignment operators
* Using increment and decrement operators
* Understanding operator precedence

---

# 📖 Important Concepts Learned

| Concept | Purpose               |   |            |
| ------- | --------------------- | - | ---------- |
| `cin`   | Receives input        |   |            |
| `cout`  | Displays output       |   |            |
| `>>`    | Extraction operator   |   |            |
| `<<`    | Insertion operator    |   |            |
| `+`     | Addition              |   |            |
| `-`     | Subtraction           |   |            |
| `*`     | Multiplication        |   |            |
| `/`     | Division              |   |            |
| `%`     | Remainder             |   |            |
| `==`    | Checks equality       |   |            |
| `!=`    | Checks inequality     |   |            |
| `>`     | Greater than          |   |            |
| `<`     | Less than             |   |            |
| `>=`    | Greater than or equal |   |            |
| `<=`    | Less than or equal    |   |            |
| `&&`    | Logical AND           |   |            |
| `       |                       | ` | Logical OR |
| `!`     | Logical NOT           |   |            |
| `=`     | Assignment            |   |            |
| `+=`    | Add and assign        |   |            |
| `-=`    | Subtract and assign   |   |            |
| `*=`    | Multiply and assign   |   |            |
| `/=`    | Divide and assign     |   |            |
| `%=`    | Modulus and assign    |   |            |
| `++`    | Increment             |   |            |
| `--`    | Decrement             |   |            |

---

# 🔑 Key Takeaways

1. `cout` is used to display output.
2. `cin` is used to receive input.
3. `<<` sends data to an output stream.
4. `>>` receives data from an input stream.
5. Arithmetic operators perform mathematical calculations.
6. Relational operators compare values.
7. Logical operators work with conditions.
8. Assignment operators assign or modify values.
9. `%` returns the remainder after integer division.
10. `==` compares values, while `=` assigns a value.
11. Parentheses can be used to control the order of operations.
12. Operators are an important part of almost every C++ program.

---

## 📁 Folder Contents

```text
03-input-output-and-operators/
├── main.cpp
└── README.md
```

`main.cpp` contains the practical examples, while this `README.md` explains the input, output, and operators demonstrated in the program.
