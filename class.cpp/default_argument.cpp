#include<iostream>
#include<cmath>
using namespace std ;
class polar{
  float rad , radius;
  public:
    polar(){}
    /*polar(cartesian c){
      rad = atan(c.y/c.x);
      radius = sqrt(pow(c.x,2)+pow(c.y,2));

    }*/
    polar(float a , float b):radius(a),rad(b){}
    void print(){
      cout<<"radius =  "<<radius<<" radian = "<<rad<<endl;
    }
};
class cartesian{
  int x , y;
  public:
  friend class polar;
    cartesian(){}
    cartesian(int a , int b):x(a),y(b){}
    operator polar(){
      return polar(sqrt(pow(x,2)+pow(y,2)),atan(y/x));
    }

};
int main(){
  cartesian c(3,4);
  polar p;
  p = c;
  p.print();


  return 0;
}
