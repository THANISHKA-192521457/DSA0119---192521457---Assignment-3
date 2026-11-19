#include <iomanip>
#include <iostream>
class Money {
 long long paise;
public:
 Money(long long rupees=0,int p=0):paise(rupees*100+p){}
 Money operator+(const Money& b)const{return Money(0,static_cast<int>(paise+b.paise));}
 Money operator-(const Money& b)const{return Money(0,static_cast<int>(paise-b.paise));}
 Money& operator+=(const Money& b){paise+=b.paise;return *this;}
 bool operator==(const Money& b)const{return paise==b.paise;}
 bool operator<(const Money& b)const{return paise<b.paise;}
 friend std::ostream& operator<<(std::ostream& os,const Money& m){long long v=m.paise;os<<"Rs "<<(v/100); if(v<0 && v%100) os<<"."; else os<<"."; os<<std::setw(2)<<std::setfill('0')<<std::llabs(v%100)<<std::setfill(' ');return os;}
};
int main(){Money a(120,75),b(79,25);Money c=a+b;std::cout<<c<<"\n"<<std::boolalpha<<(c==Money(200))<<"\n";Money x(0,75),y(0,50);std::cout<<x+y<<"\n";std::cout<<Money(1)-Money(2)<<"\n";}
