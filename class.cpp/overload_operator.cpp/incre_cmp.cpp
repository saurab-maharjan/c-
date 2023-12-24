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
        complex operator++(){//pre increment
            this->real = ++real;
            this->img = ++img;
            return *this;
        }
        complex operator++(int){//post increment
            this->real = real++;
            this->img = img++;
            return *this;
        }
};
int main(){
    complex a(7,5);
    a++;
    a.print();


  return 0;
}