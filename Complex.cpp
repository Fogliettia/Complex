// Complex.cpp
// example of an application of the Complex class

#include "Complex.h"
#include <iostream>
using namespace std;

int main() {
  Complex c1(3,5), c2(-3,-5), c3(1,0);
  c1.print();
  c2.print();
  c3.print();
  Complex c;
  c.print();
  c.setRe(3);
  c.setIm(-4);
  c.print();
  Complex c4=3-c;
  cout<<"c4"<<endl;
  c4.print();
  Complex c5(5,-1);
  Complex diviso;
  diviso=10/c5;
  diviso.print();
  
  c1.print();
  Complex* del=new Complex(1,2);
  del->print();
  //delete del;

  return 0;
}
