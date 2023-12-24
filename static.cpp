#include<iostream>
using namespace std;
class Simple{
    int x , y;
    static int m ;
    public:
        void print(){
            cout<<x<<" "<<y<<endl;
        }
        Simple(){
            x = 0;
            y = 0;
            ++m;
        }
        Simple(int m , int n){
            this->x = m;
            this->y = n;
            ++m;
        }
       static void show(){
            cout<<"the object has created "<<m<<" times"<<endl;
        }
};
int Simple::m;
int main(){
    Simple a, b;
    Simple::show();
    
    return 0;

}