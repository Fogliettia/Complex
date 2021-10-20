// Complex.h
// header file of the Complex class

#ifndef Complex_h // if Complex_h is not defined,
#define Complex_h // define the new variable Complex_h
#include <iostream>

class Complex{
public:
    //Constructors
    Complex(){
        re_=0;
        im_=0;
    }
    Complex(double re,double im){
        re_=re;
        im_=im;
    }
    
    //Destructor
    ~Complex();

    //Getters
    double re(){return re_;}
    double im(){return im_;}
    
    //Setters
    void setRe(double re);
    void setIm(double im);
    
    //Member functions
    void print();
    
    double mag();
    double phase();
    double r();
    double phi();
    
    //Overloading operators between Complex objects
    Complex operator+(const Complex& rhs) const;
    Complex operator-(const Complex& rhs) const;
    Complex operator*(const Complex& rhs) const;
    Complex operator/(const Complex& rhs) const;
    
    //Overloading operators between double and complex
    Complex operator+(const double& rhs) const;
    Complex operator-(const double& rhs) const;
    Complex operator*(const double& rhs) const;
    Complex operator/(const double& rhs) const;
    
    const Complex& operator=(const Complex& rhs);
    const Complex& operator+=(const Complex& rhs);
    const Complex& operator-=(const Complex& rhs);
/*
const Complex& operator*=(const Complex& rhs);//
const Complex& operator/=(const Complex& rhs);//  non si possono fare perche (a+ib)(c+id)=(ac-bd)+i(ad+bc), quindi cosi farei il prodotto ma ogni singola volta dovrei farlo xk è *= ma non lo so fare, o implementiamo l'overload che prende in imput sia lhs che rhs e allora qualcosina si puo fare, ma comunque non so come renderlo ricorsivo
*/  
    friend Complex operator*(const double& lhs,const Complex& rhs);
    friend Complex operator/(const double& lhs,const Complex& rhs);
    friend Complex operator+(const double& lhs,const Complex& rhs);
    friend Complex operator-(const double& lhs,const Complex& rhs);
    friend std::ostream& operator<<(std::ostream& os, const Complex& rhs);

private:
    double re_;
    double im_;
};

#endif // end of ifndef block of code
