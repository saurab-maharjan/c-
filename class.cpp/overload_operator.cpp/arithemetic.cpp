#include<iostream>
using namespace std;
class Coordinate{
    int x , y;
    friend Coordinate operator+(Coordinate &a,Coordinate &b){
            Coordinate p(a.x+b.x,a.y+b.y);
            return p;
        }
    friend Coordinate operator*(Coordinate &a,Coordinate &b){
            Coordinate p(a.x*b.x,a.y*b.y);
            return p;
        }
    friend Coordinate operator/(Coordinate &a,Coordinate &b){
            Coordinate p(a.x/b.x,a.y/b.y);
            return p;
        }
    friend Coordinate operator-(Coordinate &a,Coordinate &b){
            Coordinate p(a.x-b.x,a.y-b.y);
            return p;
        }
    public:
        Coordinate(int m = 0,int n = 0):x(m),y(n){};
        ~Coordinate(){}
        
        void print(){
            cout<<'('<<x<<','<<y<<')';
        }
};
int main(){
    Coordinate  i(5,6),j(2,3),sam;
    sam = i/j;
    sam.print();
    return 0;
}