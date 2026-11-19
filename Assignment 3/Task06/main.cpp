#include <cstring>
#include <iostream>
class Text {
 char* data;
public:
 Text(const char* s=""):data(new char[std::strlen(s)+1]){std::strcpy(data,s);}
 Text(const Text& o):data(new char[std::strlen(o.data)+1]){std::strcpy(data,o.data);}
 Text& operator=(const Text& o){if(this!=&o){char* fresh=new char[std::strlen(o.data)+1];std::strcpy(fresh,o.data);delete[] data;data=fresh;}return *this;}
 ~Text(){delete[] data;}
 Text operator+(const Text& o)const{char* tmp=new char[std::strlen(data)+std::strlen(o.data)+1];std::strcpy(tmp,data);std::strcat(tmp,o.data);Text result(tmp);delete[] tmp;return result;}
 bool operator==(const Text& o)const{return std::strcmp(data,o.data)==0;}
 bool operator!=(const Text& o)const{return !(*this==o);}
 friend std::ostream& operator<<(std::ostream& os,const Text& t){return os<<t.data;}
};
int main(){Text a("Hello "),b("World"),c=a+b;std::cout<<c<<"\n"<<std::boolalpha<<(c==Text("Hello World"))<<"\n";a=a;Text empty;std::cout<<"Empty=["<<empty<<"]\n";Text longText("A longer message safely copied.");Text copy=longText;std::cout<<copy<<"\n";}
