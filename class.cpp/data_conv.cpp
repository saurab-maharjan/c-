#include<iostream>
using namespace std ;
class complex{
    int real , img;
    public:
        complex(){}
        complex(int a , int b):real(a),img(b){}
        void print(){
            cout<<real<<" + "<<img<<" j "<<endl;
        }
};
class simple{
    int x , y;
    public:
        simple(){}
        simple(int a , int b):x(a),y(b){}
        void print(){
            cout<<x<<" + "<<y<<endl;
        }
        operator complex(){
            return complex(x,y);
        }
};
int main(){
    complex a;
    simple b(9,6);
    a = b;
    a.print();


  return 0;
}