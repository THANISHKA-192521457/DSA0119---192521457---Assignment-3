# Task04 Design, Analysis & Evaluation

Money stores paise. + returns a new value; += mutates and returns *this by reference. == and < compare stored paise. Stream insertion is non-member because the left operand is ostream; friend grants access. a+b is equivalent to a.operator+(b). Operators shown run in O(1) time and O(1) extra space. Multiplying two Money values is not usually meaningful (currency squared); multiplication by a scalar is more sensible. Paise carry naturally because storage is integer paise.

## Output

```text
Rs 200.00
true
Rs 1.25
Rs -1.00
```

## Evidence notes
- Source compiled successfully using `g++ -std=c++17 -Wall -Wextra`.
- Output was captured from the executable and rendered as a console-output image.
- AddressSanitizer runtime is unavailable in this execution environment; see root `SANITIZER_NOTE.md`.
