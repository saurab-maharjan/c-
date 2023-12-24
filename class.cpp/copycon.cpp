#include<iostream>
using namespace std;
class Rational{
    public:
        Rational(int p = 2,int q = 3): num(p),den(q){}
        Rational( const Rational &r) : num(r.num),den(r.den){}
    void print(){
        cout<<num<<'/'<<den;
    }
    private:
        int num,den;
};
int main(){
    Rational m(4,6);
    Rational t(m);
    t.print();

    return 0;
}