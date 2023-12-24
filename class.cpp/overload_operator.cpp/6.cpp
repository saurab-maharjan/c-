#include<iostream>
using namespace std ;
class Distance{
    int ft , in;
    public:
        Distance(){}
        Distance(int ft , int in){
            this->ft = ft;
            this->in = in;
        }
        int operator>=(Distance a){
            if((ft+in/12)>=(a.ft+a.in/12)){
                return 1;
            }
            else{
                return 0;
            }

        }
        int operator!=(Distance a){
            if((ft+in/12)!=(a.ft+a.in/12)){
                return 1;
            }
            else{
                return 0;
            }

        }
        
};
int main(){
    Distance a(4,5),b(4,1);
    switch(a>=b){
        case 1: cout<<"a is greater than b"<<endl;break;
        case 0: cout<<"a is less than b "<<endl;break;
    }
    switch(a!=b){
        case 1: cout<<"a is not equal to b"<<endl;break;
        case 0: cout<<"a is equal to b"<<endl;break;
    }


  return 0;
}