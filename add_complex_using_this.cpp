#include<iostream>
using namespace std;
class Complex{
    int real , img;
    public:
        Complex(int r , int s){
            real = r;
            img = s;
        }
        Complex(){}
        Complex add(Complex a,Complex b){
            this->real =   a.real + b.real;
            this->img =  a.img + b.img;
            return *this;
        }
        void print(){
            cout<<real<<"+"<<img<<"i"<<endl;
        }
};
int main(){
    Complex a(1,2), b(3,5), c;
    c.add(a,b);
    c.print();
    return 0;
}