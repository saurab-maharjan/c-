#include<iostream>
#include<iomanip>
using namespace std ;
class cartesian{
    int x , y;
    public:
        cartesian(){}
        cartesian(int x , int y){
            this->x = x;
            this->y = y;
        }
        cartesian& operator++(int){
            x++;
            y++;
            return *this;
        } 
        void print(){
            cout<<" x = "<<x<<ends<<" y = "<<y<<endl;
        }
};
int main(){
    cartesian c(7,4);
    c++;
    c.print();


  return 0;
}