#include <cmath>
#include <iostream>
#include <stdexcept>
class Complex {
 double re,im;
public:
 Complex():re(0),im(0){} Complex(double r):re(r),im(0){} Complex(double r,double i):re(r),im(i){}
 Complex operator+(const Complex& z)const{return {re+z.re,im+z.im};}
 Complex operator-(const Complex& z)const{return {re-z.re,im-z.im};}
 Complex operator*(const Complex& z)const{return {re*z.re-im*z.im,re*z.im+im*z.re};}
 Complex operator/(const Complex& z)const{double d=z.re*z.re+z.im*z.im;if(d==0)throw std::domain_error("division by zero impedance");return {(re*z.re+im*z.im)/d,(im*z.re-re*z.im)/d};}
 bool operator==(const Complex& z)const{return re==z.re&&im==z.im;}
 double magnitude()const{return std::sqrt(re*re+im*im);}
 friend std::ostream& operator<<(std::ostream& os,const Complex& z){return os<<z.re<<(z.im>=0?"+":"")<<z.im<<"j";}
};
int main(){Complex R(10),L(0,5),C(0,-2);Complex series=R+L+C;Complex parallel=(R*L)/(R+L);std::cout<<"Series Z = "<<series<<" |Z|="<<series.magnitude()<<"\n";std::cout<<"Parallel R||L = "<<parallel<<" |Z|="<<parallel.magnitude()<<"\n";try{Complex z=R/Complex();(void)z;}catch(const std::exception&e){std::cout<<"Safe error: "<<e.what()<<"\n";}}
