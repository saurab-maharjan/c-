#include<iostream>
#include<string.h>
using namespace std;

class Rational{
    public:
        Rational(string name,int num){
            a = name;
            rank = num;
        }
        Rational(){
            a = "saurab";
            rank = 1;
        }
        void print(){
            cout<<"Your name is "<<a<<"\tand your rank is "<<rank;
        }


    private:
        string a;
        int rank;
};
int main(){
    Rational a,b("trinity",8);
    b.print();
    a.print();
    return 0;
}





  