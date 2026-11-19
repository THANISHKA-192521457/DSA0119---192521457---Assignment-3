# Task01 Design, Analysis & Evaluation

Constructors use delegation to centralize validation. Copies count must be nonnegative; invalid values throw. Member initialization order is declaration order. Compiler provides default ctor only if no user-declared constructors exist. Initializer lists initialize members directly and are required for const/reference members. Object state: empty=(Untitled,Unknown,0), donated=(Donated Book,Unknown,0), full=(C++ Basics,Bjarne,5). explicit prevents implicit conversion from string to Book. Default-arguments alternative uses Book(title="",copies=0,author="Unknown") and validation once; creation O(1) time/space.

## Output

```text
Untitled | Unknown | copies=0
Donated Book | Unknown | copies=0
C++ Basics | Bjarne | copies=5
Rejected: copies cannot be negative
```

## Evidence notes
- Source compiled successfully using `g++ -std=c++17 -Wall -Wextra`.
- Output was captured from the executable and rendered as a console-output image.
- AddressSanitizer runtime is unavailable in this execution environment; see root `SANITIZER_NOTE.md`.
