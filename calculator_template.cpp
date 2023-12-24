#include<iostream>
using namespace std ;
template <class x,class y>
class calculator{
    x m;
    y n;
    public:
        calculator(){
        }
        calculator(x a , y b ):m(a),n(b){}
        x addition(){
            return (m+n);
        }
        x multiplication(){
            return (m*n);
        }
        x division(){
            return(m/n);
        }
        x substraction(){
            return (m-n);
        }
};
int main(){
    calculator <float,int> a(4,7.8);
    cout<<a.addition();


  return 0;
}