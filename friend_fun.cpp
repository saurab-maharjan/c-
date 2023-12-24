#include<iostream>
using namespace std;
class ABC{
    int x ;
    public:
    ABC(){
        x = 12;
    }
    friend void display(ABC);
};
void display(ABC r){
    cout<<r.x;
}
int main(){
    ABC p;
    display(p);
    return 0;
}