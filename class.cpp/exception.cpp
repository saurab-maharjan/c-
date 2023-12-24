#include<iostream>
using namespace std ;
void fun(int a , int b){
    if(b==0){
        throw(b);
    }
    else{
        cout<<a/b<<endl;
    }
}
int main(){
    try{
        fun(9,0);
        fun(15,0);
    }
    catch(int x){
        cout<<"number"<<x<<" cannot be divided to other\n";
    }


  return 0;
}