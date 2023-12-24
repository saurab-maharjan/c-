#include<iostream>
using namespace std ;
class complex{
    int real , img;
    public:
        complex(){}
        complex(int real , int img){
            this->real = real;
            this->img = img;
        }
        void print(){
            cout<<real<<" + "<<img<<"j"<<endl;
        }
        friend complex operator+(complex,complex);
        
};
complex operator+(complex a, complex b){
    complex temp;
    temp.real = b.real + a.real;
    temp.img = b.img + a.img;
    return temp;
}

int main(){
    complex a(7,5), c,b(2,2);
 
    c = a+b;
    c.print();


  return 0;
}