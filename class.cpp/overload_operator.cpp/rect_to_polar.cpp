#include<iostream>
#include<cmath>
using namespace std ;
class rect;
class polar{
    float r , rad;
    public:
        polar(){}
        polar(float a, float b):r(a),rad(b){}
        void print(){
            cout<<r<<" < "<<rad<<"radian"<<endl;
        }
        
};
class rect{
    int x , y;
    public:
        rect(){}
        rect(int a , int b):x(a),y(b){}
        operator polar(){
            return polar(sqrt(pow(x,2)+pow(y,2)),atan(y/x));
        }
};
int main(){
    rect r(1,1);
    polar p;
    p = r;
    p.print();


  return 0;
}