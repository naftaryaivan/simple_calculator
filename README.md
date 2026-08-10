# simple_calculator
# 🧮 Simple C Calculator

A simple command-line calculator written in **C programming language**.
This project performs basic arithmetic operations and includes input validation to make sure the user enters valid numbers.

## 📌 Features

* ➕ Addition
* ➖ Subtraction
* ✖️ Multiplication
* ➗ Division
* 🔢 Accepts decimal numbers
* ⚠️ Detects invalid number input
* 🔄 Allows the user to perform multiple calculations
* 🚫 Prevents division by zero
* ❌ Allows the user to close the calculator

## 🛠️ Technologies Used

* **C Programming Language**
* **GCC Compiler**
* **Dev-C++ / Visual Studio Code**

## 📂 Project Structure

```text
Simple-Calculator/
│
├── calculator.c
└── README.md
```

## ▶️ How to Run

### Using GCC

1. Clone the repository:

```bash
git clone https://github.com/YOUR-USERNAME/Simple-Calculator.git
```

2. Open the project folder.

3. Compile the program:

```bash
gcc calculator.c -o calculator
```

4. Run the program:

**Windows:**

```bash
calculator.exe
```
## 💻 Example

```text
Enter first number: 25.5
Enter operation: +
Enter second number: 4

Result = 29.50

Press n or N for next calculation or any other key to close: n

Enter first number: 10
Enter operation: /
Enter second number: 2

Result = 5.00
```

### Invalid Input Example

```text
Enter first number: hello
Invalid input! Please enter a number again: 20

Enter operation: *
Enter second number: 5

Result = 100.00
```

### Division by Zero

```text
Enter first number: 10
Enter operation: /
Enter second number: 0

Cannot divide by zero!
```

## 📚 Concepts Practiced

This project helped me practice several fundamental C programming concepts:

* Variables and data types
* `printf()` and `scanf()`
* Format specifiers
* `if` statements
* `switch` statements
* `while` loops
* `do-while` loops
* Functions
* Input validation
* `getchar()`
* Arithmetic operators
* User input handling

## 🎯 Purpose

This project was created as a **beginner C programming project** to practice programming fundamentals and understand how functions, loops, conditions, and user input work together in a real program.

## 👨‍💻 Author

**Aivan Naftary**

Computer Engineering and IT Student

