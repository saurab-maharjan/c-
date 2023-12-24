#include<iostream>
#include<conio.h>
using namespace  std;
inline int max(int x, int y){
    return (x>y)?x:y;
}
int main(){
    int a,b,c;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    c = max(a,b);
    cout<<"the greater nuber is "<<c;
    return 0;
}
