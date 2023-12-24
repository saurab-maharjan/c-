#include<iostream>
using namespace std;
class Coordinate{
    int x , y;
    friend int operator==(Coordinate &a,Coordinate &b){
        return (a.x*a.y) == (b.x*b.y);
    }
    friend int operator>=(Coordinate &a,Coordinate &b){
        return (a.x*a.y) >= (b.x*b.y);
    }
    friend int operator<=(Coordinate &a,Coordinate &b){
        return (a.x*a.y) <= (b.x*b.y);
    }
    friend int operator!=(Coordinate &a,Coordinate &b){
        return (a.x*a.y) != (b.x*b.y);
    }
    public:
        Coordinate(int m = 0,int n = 0):x(m),y(n){};
        ~Coordinate(){}
        
        void print(){
            cout<<'('<<x<<','<<y<<')';
        }
};
int main(){
    Coordinate  i(9,6),j(5,6);
    if(i>=j){
        cout<<"They are equal\n";
    }
    
    
    return 0;
}