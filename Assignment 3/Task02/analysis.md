# Task02 Design, Analysis & Evaluation

A shallow copy copies the pointer, so both objects point at the same array; edits are shared and both destructors delete the same allocation (double free). Deep copy allocates a new array and copies each string. Rule of Three: destructor, copy constructor, copy assignment when managing raw ownership. Copy constructor used for initialization from another object, pass-by-value, and return-by-value (copy may be elided). Copying n medicine strings is O(n) time and O(n) extra space; shallow copy is O(1) but unsafe. std::vector enables Rule of Zero.

## Output

```text
Ibuprofen ORS | Paracetamol Cetirizine | Paracetamol ORS
Self-assignment safe: Paracetamol
```

## Evidence notes
- Source compiled successfully using `g++ -std=c++17 -Wall -Wextra`.
- Output was captured from the executable and rendered as a console-output image.
- AddressSanitizer runtime is unavailable in this execution environment; see root `SANITIZER_NOTE.md`.
