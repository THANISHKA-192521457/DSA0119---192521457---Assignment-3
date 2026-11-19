## Additional required experiments
### Removing default constructor
Remove `Book()` then try `Book books[3];`. Compilation fails because the array requires a default constructor for every element. Use `Book books[3] = {Book("A"), Book("B"), Book("C")};` instead.
### Member initialization order warning
Declare `int copies; std::string title;` but initialize in reverse list order: `Book(): title("x"), copies(1) {}`. Compiler warning `-Wreorder` reminds that declaration order controls initialization.
### explicit demonstration
Without `explicit`, `Book b = "Donated";` can use the converting constructor. With `explicit`, copy-initialization is rejected; direct initialization `Book b("Donated");` works.
