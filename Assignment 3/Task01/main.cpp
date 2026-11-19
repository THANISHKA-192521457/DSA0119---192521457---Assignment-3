#include <iostream>
#include <string>
class Book {
    std::string title;
    int copies;
    std::string author;
    static int validCopies(int n) { if(n<0) throw std::invalid_argument("copies cannot be negative"); return n; }
public:
    Book() : Book("Untitled",0,"Unknown") {}
    explicit Book(std::string t) : Book(std::move(t),0,"Unknown") {}
    Book(std::string t,int c) : Book(std::move(t),validCopies(c),"Unknown") {}
    Book(std::string t,int c,std::string a) : title(std::move(t)),copies(validCopies(c)),author(std::move(a)) {}
    void print() const { std::cout<<title<<" | "<<author<<" | copies="<<copies<<"\n"; }
};
int main(){
 Book empty; Book donated("Donated Book"); Book full("C++ Basics",5,"Bjarne");
 empty.print(); donated.print(); full.print();
 try { Book invalid("Bad Book",-2); } catch(const std::exception& e){ std::cout<<"Rejected: "<<e.what()<<"\n"; }
}
