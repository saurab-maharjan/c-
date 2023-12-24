#include<iostream>
#include<typeinfo>
using namespace std;
void get(int * &pt,int &n){
    cout<<"enter the numver of element\n";
    cin>>n;
    pt = new int[n];
    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"\t";
        cin>>pt[i];
    }
}
void print(int *a,int &n){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<"\t";
    }
}
int main(){
    int *pt,n;
    get(pt,n);
    print(pt,n);
    delete [] pt;
    
    
    return 0;
    
}