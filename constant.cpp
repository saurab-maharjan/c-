#include<iostream>
using namespace std;
class Simple{
    int x  , y;
    public:
        Simple(int a = 10,int b = 5){
            x = a;
            y = b;
        }
        void display(){
            x++;
            y++;
            cout<<x<<" "<<y<<endl;

        }
        void show() const{
            cout<<x<<" "<<y<<endl;
        }
        
};
int main(){
    const Simple  a;
    Simple b;
    b.show();
    a.show();
    return 0;
}