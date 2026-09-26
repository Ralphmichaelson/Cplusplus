# Introduction to C++

This folder introduces the **C++ programming language** and demonstrates the basic structure of a C++ program.

The `main.cpp` file contains a simple program that displays `Hello, C++!` on the screen.

---

## 📌 What is C++?

C++ is a general-purpose programming language that supports both **procedure-oriented programming** and **object-oriented programming (OOP)**.

C++ is based on the C programming language and provides additional features such as classes, objects, inheritance, polymorphism, and other object-oriented programming concepts.

---

# 1. Brief History of C++

C++ was developed by **Bjarne Stroustrup** at Bell Labs.

It was originally developed as an extension of the C programming language and was initially known as **"C with Classes."**

The language was later named **C++**.

The name `C++` comes from the C increment operator:

```cpp
C++
```

The `++` operator means **increment by one**, suggesting an improved or extended version of C.

---

# 2. Why Was C++ Created?

C++ was created to add additional programming features to C, particularly features that support **object-oriented programming**.

Traditional procedural programming focuses mainly on functions and procedures.

Object-oriented programming organizes programs around **objects and classes**, allowing data and the functions that operate on that data to be grouped together.

According to the course notes, OOP emphasizes data rather than procedures and organizes programs into objects.

---

# 3. Features of C++

Some important features of C++ include:

* Supports procedural programming
* Supports object-oriented programming
* Supports classes and objects
* Supports data encapsulation
* Supports data abstraction
* Supports inheritance
* Supports polymorphism
* Supports code reusability
* Supports functions
* Supports pointers
* Supports references
* Supports file handling

The object-oriented approach allows data and related behaviour to be organized together in objects.

---

# 4. Applications of C++

C++ is used in many areas of software development, including:

* Operating systems
* Desktop applications
* Game development
* Embedded systems
* System software
* Compilers
* High-performance applications
* Graphics and simulations

C++ is particularly useful where performance and control over system resources are important.

---

# 5. C++ and C

C++ is based on C and retains many concepts from the C programming language.

However, C++ adds features that are not part of traditional C, especially object-oriented programming features.

| C                                          | C++                                   |
| ------------------------------------------ | ------------------------------------- |
| Mainly procedural                          | Procedural and object-oriented        |
| Uses functions as the main building blocks | Uses functions, classes, and objects  |
| Does not have classes                      | Supports classes                      |
| Does not support inheritance               | Supports inheritance                  |
| Does not support function overloading      | Supports function overloading         |
| Uses structures mainly for grouping data   | Structures can also contain functions |
| Generally simpler language                 | Provides more programming features    |

C is commonly classified as a procedure-oriented programming language, while C++ supports the object-oriented approach.

---

# 6. Basic C++ Program Structure

The `main.cpp` file contains:

```cpp
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, C++!" << endl;

    return 0;
}
```

Let's understand each part.

---

# 7. `#include <iostream>`

```cpp
#include <iostream>
```

`#include` is a preprocessor directive.

It tells the compiler to include the contents of the specified header file.

`iostream` provides input and output functionality.

For example, it allows us to use:

```cpp
cout
```

for displaying output.

Later, we will also use:

```cpp
cin
```

for receiving input from the user.

---

# 8. `using namespace std`

```cpp
using namespace std;
```

The C++ Standard Library contains many features inside the `std` namespace.

Without `using namespace std`, we would normally write:

```cpp
std::cout << "Hello, C++!";
```

With:

```cpp
using namespace std;
```

we can simply write:

```cpp
cout << "Hello, C++!";
```

---

# 9. The `main()` Function

```cpp
int main()
{
    
}
```

`main()` is the function where execution of a C++ program begins.

The operating system starts the program by calling the `main()` function.

### `int`

```cpp
int main()
```

The `int` means that the function returns an integer value.

---

# 10. Curly Braces `{ }`

```cpp
int main()
{
    // program statements
}
```

The curly braces define the **body of the function**.

Statements placed between `{` and `}` belong to the `main()` function.

---

# 11. `cout`

```cpp
cout << "Hello, C++!";
```

`cout` is used to display output on the screen.

The insertion operator:

```cpp
<<
```

sends the specified data to `cout`.

For example:

```cpp
cout << "Welcome to C++";
```

displays:

```text
Welcome to C++
```

---

# 12. `endl`

```cpp
cout << "Hello, C++!" << endl;
```

`endl` moves the cursor to the next line.

For example:

```cpp
cout << "Hello" << endl;
cout << "World";
```

Output:

```text
Hello
World
```

---

# 13. `return 0`

```cpp
return 0;
```

This returns the value `0` from the `main()` function.

A return value of `0` conventionally indicates that the program completed successfully.

---

# 14. C++ Statements

A statement is an instruction that tells the program to perform an action.

For example:

```cpp
cout << "Hello, C++!";
```

Most C++ statements end with a semicolon:

```cpp
;
```

Forgetting the semicolon can cause a compilation error.

---

# 15. Comments

Comments allow programmers to write notes inside their source code.

A single-line comment begins with:

```cpp
//
```

Example:

```cpp
// Display a message
cout << "Hello, C++!";
```

Comments are ignored by the compiler.

---

# 16. Complete Program

The complete `main.cpp` program is:

```cpp
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, C++!" << endl;

    return 0;
}
```

When executed, it produces:

```text
Hello, C++!
```

---

# 17. Compilation and Execution

C++ source code must be compiled before it can be executed.

The source file is:

```text
main.cpp
```

Using the GNU C++ compiler, we can compile it with:

```powershell
g++ main.cpp -o main
```

This creates an executable program.

On Windows, it can then be executed with:

```powershell
.\main.exe
```

The output is:

```text
Hello, C++!
```

---

# 🧩 Understanding the Program Structure

The basic structure can be visualized as:

```text
#include <iostream>
        │
        ▼
using namespace std;
        │
        ▼
    int main()
        │
        ▼
      {
        │
        ├── cout
        │
        └── return 0
        │
        ▼
      }
```

This structure will be expanded as more C++ concepts are introduced throughout the next topics.

---

# 📖 Important Concepts Learned

| Concept               | Purpose                                              |
| --------------------- | ---------------------------------------------------- |
| C++                   | General-purpose programming language                 |
| `#include`            | Includes a header file                               |
| `<iostream>`          | Provides input/output functionality                  |
| `using namespace std` | Allows use of standard library names without `std::` |
| `main()`              | Starting point of program execution                  |
| `int`                 | Specifies an integer return type                     |
| `{ }`                 | Defines a block of code                              |
| `cout`                | Displays output                                      |
| `<<`                  | Insertion operator                                   |
| `endl`                | Moves output to a new line                           |
| `return 0`            | Indicates successful program termination             |
| `;`                   | Terminates most statements                           |
| `//`                  | Creates a single-line comment                        |

---

# 🧪 What I Practiced

In `main.cpp`, I practiced:

* Creating a basic C++ program
* Including the `<iostream>` header
* Using the `std` namespace
* Creating the `main()` function
* Using `cout`
* Using the insertion operator `<<`
* Using `endl`
* Returning `0`
* Compiling a C++ program
* Running the compiled program

---

# 🔑 Key Takeaways

1. C++ is a general-purpose programming language based on C.
2. C++ supports both procedural and object-oriented programming.
3. `#include <iostream>` provides input/output functionality.
4. `main()` is where program execution begins.
5. `cout` is used to display output.
6. `endl` moves output to a new line.
7. `return 0` indicates successful program completion.
8. C++ statements generally end with a semicolon.
9. C++ source files commonly use the `.cpp` extension.
10. C++ programs must be compiled before they can be executed.

---

## 📁 Folder Contents

```text
01-introduction-to-cpp/
├── main.cpp
└── README.md
```

`main.cpp` contains the practical C++ program, while this `README.md` explains the concepts and syntax demonstrated in the code.
