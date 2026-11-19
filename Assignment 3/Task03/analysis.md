# Task03 Design, Analysis & Evaluation

Rows are pointer-array plus separately allocated row arrays. Constructor allocates; destructor deletes each row then pointer array. Stack objects are destroyed at scope exit; block objects at block end; heap objects only at delete. Forgetting delete leaks; delete instead of delete[] is undefined behavior. Destructor has no parameters and cannot be overloaded. RAII ties cleanup to object lifetime. Current program demonstrates booking/cancellation and zero rows. Row-pointer layout needs rows+1 allocations; flat array needs one allocation; vector-of-vectors usually rows+1 allocations. Access O(1).

## Output

```text
Created 2x3
Created 1x2
Closed; booked seats=1
Created 2x2
Closed; booked seats=1
Created 0x5
Closed; booked seats=0
Closed; booked seats=1
```

## Evidence notes
- Source compiled successfully using `g++ -std=c++17 -Wall -Wextra`.
- Output was captured from the executable and rendered as a console-output image.
- AddressSanitizer runtime is unavailable in this execution environment; see root `SANITIZER_NOTE.md`.
