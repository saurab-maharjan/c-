#include <iostream>
using namespace std;
const int siz = 100;

void getarray(int a[],int &s){
    cout<<"enter element but entering 0 will terminate"<<endl;
    
    for(s=0;s<siz;s++){
        cin>>a[s];
        if(a[s]==0) break;
    }
    
}
void print( int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}
int main(){
    int a[siz],n;
    getarray(a,n);
    cout<<"the size of array is "<<n<<" having element "<<endl;
    print(a,n);
    return 0;

}
