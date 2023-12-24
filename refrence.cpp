#include<iostream>
using namespace std;
int swap(int &a,int&b){
    int tmp ;
    tmp = a;
    a = b;
    b = tmp;
}
int main(){
    int a,b;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    cout<<"before swapping\t"<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"after swapping\t"<<a<<" "<<b;
    return 0;

}