#include<iostream>
using namespace std;
int linear(int a[],int n,int key){
    for(int i =0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }

}
int main(){
    int n,key;
    cout<<"enter the number of element "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the elemment to know the the index ";
    cin>>key;
    cout<<linear(a,n,key);


}