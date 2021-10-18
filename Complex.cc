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


//Setters
void Complex::setRe(double re){re_=re;}
void Complex::setIm(double im){im_=im;}

//Member functions
void Complex::print(){
    cout<< "complex: " << re_ << " + i*" << im_ << endl;
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

/*double r(){
    
}

double phi(){
    
}
 */

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







