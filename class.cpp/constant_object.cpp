#include<iostream>
using namespace std;
class Rational{
    public:
        Rational(int m = 9,int n = 7): num(m),den(n){cout<<"object created\n"<<endl;}
        
        ~Rational(){cout<<"\nobject destroyed\n";}
        void print()const{
            cout<<num<<'/'<<den;
        }
    private:
        int num,den;
};
int main(){
   const  Rational  paris(22,44);
   Rational p;
    paris.print();
    p.print();
    
    
    
    return 0;
}