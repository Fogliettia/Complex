// Complex.cpp
// example of an application of the Complex class

#include "Complex.h"
#include <iostream>
using namespace std;

int main() {
    Complex c1(3,5);
    c1.print();
    Complex c2(1,6);
    //Complex c3=c1-c2;
           // cout << "ciao" <<  endl;
    cout << "complex: " << c1.re() << "+"<< c1.im() <<"i"<< endl;
    cout << "complex: " << c2.re() << "+"<< c2.im() <<"i"<< endl;
    //c1+c2;
    //cout << "complex: " << c3.re() << "+"<< c3.im() <<"i"<< endl;
       // cout << "complex: " << c3.re() << "+i*"<< c3.im() << endl;
        //c3.print();

  return 0;
}
