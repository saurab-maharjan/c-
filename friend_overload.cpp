#include<iostream>
#include<string.h>
#include<string>
using namespace std;
class Math{
    private:
        int x,y;

    friend istream& operator>>(istream &,Math&);
    friend ostream& operator<<(ostream &,Math);

    public:
        Math(int m = 1,int n = 1):x(m),y(n){}
        
        Math(const Math &a):x(a.x),y(a.y){}
        friend Math operator-(Math);
        friend Math operator+(Math,Math);
        void print(){
            cout<<'('<<x<<','<<y<<')';
        }
};
Math operator-(Math a){
    Math temp;
    temp.x = -a.x;
    temp . y = -a.y;
    return temp;
}
Math operator+(Math a,Math b){
            Math m;    
            m.x = a.x + b.x;
            m.y = a.y + b.y;
            return m;
        }
istream& operator>>(istream &in,Math &a){
    cout<<"enter two number\n";
    in>>a.x>>a.y;
    return(in);
   
}
ostream& operator<<(ostream &out,Math a){
    cout<<"The number you entered is\t";
    out<<a.x<<'\t'<<a.y;
    return (out);
    
    
}


int main(){
    


    


    return 0;
}