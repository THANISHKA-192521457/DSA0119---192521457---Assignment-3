# ASSIGNMENT 3 – CO3

## Constructors, Destructors and Operator Overloading in C++

**Name:** S. THANISHKA  
**Register Number:** 192521457  
**Course:** Data Structures / C++ Programming  
**Assignment:** Assignment 3  
**Compiler:** g++  
**Compiler Version:** g++ --version
**Language:** C++  
**Standard:** C++17

---

## 1. Introduction

This repository contains the implementation of Assignment 3, covering constructors, destructors, copy constructors, dynamic memory allocation and operator overloading in C++.

All programs were implemented, compiled, executed and tested with different test cases.

## 2. Compiler and Compilation Command

Compiler used: GNU C++ Compiler (g++)

Compiler version: [Enter your g++ version]

Compilation command:

```bash
g++ -std=c++17 -Wall -Wextra program.cpp -o program
```

For Address Sanitizer testing:

```bash
g++ -std=c++17 -Wall -Wextra -fsanitize=address -g program.cpp -o program
```

## 3. Repository Structure

```text
DSA01-192521457-Assignment3/
│
├── README.md
│
├── Task01/
│   ├── program.cpp
│   ├── output.txt
│   └── screenshots/
│
├── Task02/
│   ├── program.cpp
│   ├── output.txt
│   └── screenshots/
│
├── Task03/
│   ├── program.cpp
│   ├── output.txt
│   └── screenshots/
│
├── Task04/
│   ├── program.cpp
│   ├── output.txt
│   └── screenshots/
│
├── Task05/
│   ├── program.cpp
│   ├── output.txt
│   └── screenshots/
│
├── Task06/
│   ├── program.cpp
│   ├── output.txt
│   └── screenshots/
│
└── Task07/
    ├── program.cpp
    ├── output.txt
    └── screenshots/
```

## 4. Execution Instructions

To compile and execute a program:

```bash
g++ -std=c++17 -Wall -Wextra program.cpp -o program
```

Run the program:

```bash
./program
```

On Windows:

```bash
program.exe
```

## 5. Task Descriptions and Results

### Task 1 – Constructors and Constructor Overloading

Implemented default, parameterized and overloaded constructors using member initializer lists and constructor delegation. Validated book details and the number of copies.

**Result:** Book objects were created successfully using different constructors.

### Task 2 – Copy Constructors: Shallow and Deep Copies

Implemented deep copy, copy assignment operator and destructor for dynamically allocated medicine records. Tested copy independence and self-assignment.

**Result:** Independent copies were created without sharing dynamically allocated memory.

### Task 3 – Dynamic Constructors and Destructors

Implemented dynamic memory allocation for auditorium seat maps, booking and cancellation of seats, and memory deallocation using destructors.

**Result:** Seat maps were created and memory was released correctly when objects were destroyed.

### Task 4 – Arithmetic and Stream Operator Overloading

Implemented the Money class with overloaded arithmetic, comparison and stream operators.

**Result:** Money calculations were performed correctly, including paise-to-rupee carry.

### Task 5 – Increment, Comparison and Subscript Operator Overloading

Implemented prefix and postfix increment operators, comparison operators and range-checked playlist subscript operators.

**Result:** Time values and playlist operations worked correctly with the overloaded operators.

### Task 6 – Rules of Operator Overloading

Implemented a Text class using dynamic character allocation, copy constructor, copy assignment, destructor, concatenation and comparison operators.

**Result:** Text objects were copied and concatenated correctly with proper memory management.

### Task 7 – Complex Number Class

Designed and implemented a Complex class with constructors and overloaded arithmetic, comparison and stream operators.

**Result:** Complex

GITHUB  SUBMISSION LINK:
https://github.com/THANISHKA-192521457/DSA0119---192521457---Assignment-3
