// Complex.h
// header file of the Complex class

#ifndef Complex_h // if Complex_h is not defined,
#define Complex_h // define the new variable Complex_h

class Complex{
public:
    //Constructor
    Complex(double re,double im){
        re_=re;
        im_=im;
    }
    
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
//  double r();
//  double phi();
    
    //Overloading operators between Complex objects
    Complex operator+( const Complex& rhs) const;
    Complex operator-( const Complex& rhs) const;
    Complex operator*(const Complex& rhs) const;
    Complex operator/(const Complex& rhs) const;
    
    //Overloading operators between double and complex
    Complex operator+( const double& rhs) const;
    Complex operator-( const double& rhs) const;
    Complex operator*(const double& rhs) const;
    Complex operator/(const double& rhs) const;
    
    const Complex& operator=(const Complex& rhs);
    const Complex& operator+=(const Complex& rhs);
    const Complex& operator-=(const Complex& rhs);
    
private:
    double re_;
    double im_;
};

#endif // end of ifndef block of code
