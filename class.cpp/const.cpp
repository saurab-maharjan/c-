#include<iostream>
#include<iomanip>
using namespace std ;
class simple{
    public:
        void print() const{
          
            cout<<"this is the costant function "<<ends;
        }
        void print(){
            cout<<" this is not constant functionn "<<endl;
        }
};
int main(){
    const simple a;
    simple b;
    a.print();
    b.print();


  return 0;
}