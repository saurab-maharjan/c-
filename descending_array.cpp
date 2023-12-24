#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element ";
    cin>>n;
    int a[n],temp;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(a[j]>a[i]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }

        }
    }
    for(int m = 0;m<n;m++){
        cout<<a[m]<<"\t";
    }
}