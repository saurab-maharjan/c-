#include<iostream>
using namespace std;
class Rational{
    public:
        Rational(int roll = 4,int holl = 2) : n(roll),m(holl) { }
        void print(){
            cout<<"Your name is "<<m<<"\tand your rank is "<<n  ;
        }
        
    private:
        int n,m;
        
};

int main(){
    Rational l,m(65,45),p(89);
    m.print();cout<<endl;
    l.print();cout<<endl;
    p.print();cout<<endl;
    return 0;
}