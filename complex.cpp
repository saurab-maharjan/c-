#include<iostream>
#include<string>
using namespace std ;
class Complex{
  int real , cmp;
  public:
    Complex(){}
    Complex(int real , int cmp){
      this->real = real;
      this->cmp = cmp;
    }
    void display(){
      cout<<"real = "<<real<<"\timaginary = "<<cmp<<endl;
    }
   Complex operator++(){
    ++real;
    ++cmp;
    return *this;

   }
   Complex operator++(int){
    real++;
    cmp++;
    return *this;

   }
  friend Complex operator+(Complex a , Complex b){
    Complex c ;
    c.real = a.real + b.real;
    c.cmp = a.cmp + b.cmp;
    return c;
  }
};


int main(){
  Complex c(2,7),d(1,1),f;
  f = c+d;
  f.display();
  return 0;
}