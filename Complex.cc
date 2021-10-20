// Complex.cc
// implementation of the Complex class

// include the class header file
#include "Complex.h"

// include any additional header files
// needed in the class definition
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

//Destructor
Complex::~Complex(){
cout<<"Complex::~Complex called"<<endl;
}

//Setters
void Complex::setRe(double re){re_=re;}
void Complex::setIm(double im){im_=im;}

//Member functions
void Complex::print(){
  if(im_>0){
    cout<< "complex: " << re_ << "+" << im_<<"i"<< endl;
  }
  if(im_<0){
    cout<< "complex: " << re_ << im_ <<"i"<< endl;
}
  if(im_==0){
  cout<< "complex: " << re_ << endl;
  }
}
double Complex::mag(){
    double mag;
    mag=sqrt(pow(re_,2.0)+pow(im_,2.0));
    return mag;
}

double Complex::phase(){
    double phase;
    phase=atan(im_/re_);
    return phase;
}

double Complex::r(){
    double mag;
    mag=sqrt(pow(re_,2.0)+pow(im_,2.0));
    return mag;
}

double Complex::phi(){
    double phase;
    phase=atan(im_/re_);
    return phase;
}

//Overloading operators
Complex Complex::operator+( const Complex& rhs) const{
    //sum of real components
    double re=re_+rhs.re_;
    //sum of imaginary components
    double im=im_+rhs.im_;
    return Complex(re,im);
}


Complex Complex::operator-( const Complex& rhs) const{
    //subtraction of real components
    double re=re_-rhs.re_;
    //subtraction of imaginary components
    double im=im_-rhs.im_;
    return Complex(re,im);
}

Complex Complex::operator*(const Complex& rhs) const{
    double re=re_*rhs.re_-im_*rhs.im_;
    double im=re_*rhs.im_+im_*rhs.re_;
    return Complex(re,im);
}

Complex Complex::operator/(const Complex& rhs) const{
    double re=re_*rhs.re_+im_*rhs.im_;
    double im=im_*rhs.re_-re_*rhs.im_;
    double den=pow(rhs.re_,2)-pow(rhs.im_,2);
    return Complex(re/den,im/den);
}

//Overloading operators between double and complex
Complex Complex::operator+( const double& rhs) const{
    double re=re_+rhs;
    return Complex(re,im_);
}
Complex Complex::operator-( const double& rhs) const{
    double re=re_-rhs;
    return Complex(re,im_);
}
 
Complex Complex::operator*(const double& rhs) const{
    double re=re_*rhs;
    double im=im_*rhs;
    return Complex(re,im);
}
Complex Complex::operator/(const double& rhs) const{
    double re=re_/rhs;
    double im=im_/rhs;
    return Complex(re,im);
}

const Complex& Complex::operator=(const Complex& rhs){
    re_=rhs.re_;
    im_=rhs.im_;
    return *this;
}

const Complex& Complex::operator+=(const Complex& rhs){
    re_ += rhs.re_;
    im_ += rhs.im_;
    return *this;
}

const Complex& Complex::operator-=(const Complex& rhs){
    re_ -= rhs.re_;
    im_ -= rhs.im_;
    return *this;
}
/*
const Complex& operator*=(const Complex& rhs){
    re_ *= rhs.re_;
    im_ *= rhs.im_;
    return *this;
}

const Complex& operator/=(const Complex& rhs){
    re_ /= rhs.re_;
    im_ /= rhs.im_;
    return *this;
}
*/
Complex operator*(const double& lhs, const Complex& rhs){
return Complex(lhs*rhs.re_,lhs*rhs.im_);
}

Complex operator/(const double& lhs, const Complex& rhs){
  double den=rhs.re_*rhs.re_-rhs.im_*rhs.im_;
  return Complex(lhs*rhs.re_/den,-lhs*rhs.im_/den);
}

Complex operator+(const double& lhs, const Complex& rhs){
  return Complex(lhs+rhs.re_,rhs.im_);
}

Complex operator-(const double& lhs, const Complex& rhs){
  return Complex(lhs-rhs.re_,rhs.im_);
}

std::ostream& operator<<(std::ostream& os, const Complex& rhs){
  using namespace std;
  os<<rhs.re_<<" +i("<< rhs.im_<<")"<<endl;
  return os;
}
