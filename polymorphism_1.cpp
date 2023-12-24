#include<iostream>
using namespace std ;
class shape{
    protected:
        int l , b;
    public:
        shape(){}
        shape(int a , int b):l(a),b(b){}
        virtual void area() = 0;
};
class circle : public shape{
    public:
        circle(int r):shape(r, r){}
        void area(){
            cout<<"The area of circle  is "<<(3.14*l*l)<<endl;
        }
};
class rectangle : public shape{
    public:
        rectangle(int a , int b):shape(a, b){}
        void area(){
            cout<<" The area of rectangle is "<<(l*b)<<endl;
        }
};
int main(){
    circle c(3);
    rectangle r(3,4);
    shape *s[2] = { &c ,&r};
    s[0]->area();
    s[1]->area();
    


  return 0;
}