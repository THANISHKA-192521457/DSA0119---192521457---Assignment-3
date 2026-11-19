# Assignment 3 – CO3 (C++ Constructors, Destructors & Operator Overloading)

**Student name:** ____________________  
**Register number:** ____________________  
**Course:** DSA01  
**Compiler used:** g++ (version to be recorded on your computer)

## Folder contents
- `Task01`–`Task07`: one task per folder, source code, captured output (`output.txt`), console-output image, compile log and task analysis.
- Complete-code exercises are implemented in Task02 and Task04.
- Additional memory diagrams, predictions, experiments and hand calculations are included in relevant task folders.

## Compile and run
From each task folder:
```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o program
./program
```
For sanitizer testing on your computer:
```bash
g++ -std=c++17 -Wall -Wextra -fsanitize=address -g main.cpp -o program
./program
```
See `SANITIZER_NOTE.md` for the limitation of the execution environment used to prepare this package.

## Task summary
1. Constructors and constructor delegation; validation rejects negative copies.
2. Deep copy constructor, copy assignment, destructor and self-assignment.
3. Dynamic 2D seat map, booking/cancellation, scope and heap object lifetimes.
4. Money arithmetic using integer paise and overloaded arithmetic/comparison/stream operators.
5. Prefix/postfix increment, comparison and checked playlist subscript.
6. Owned dynamic C-string Text class with Rule of Three and operators.
7. Complex-number operations, magnitude and safe zero-division check.

## GitHub submission reminder
Create repository `DSA01-<RegisterNumber>-Assignment3`. Upload these files and make progressive commits—at least one commit for each task. Do not claim this package already has a Git commit history. Add faculty as collaborator if private and paste the repository URL on the report cover page.

## Evidence note
The screenshots are rendered captures of the executable output recorded in each `output.txt`. The output was produced by compiling and running these C++ programs in the preparation environment. They are not photographs of a physical computer screen. Timings requested in the assignment are not fabricated; perform those measurements on your machine and add your measured results.
