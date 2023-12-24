#include<iostream>
using namespace std;
int deter(int **a){
    int n;
    
    n = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    return n;


}
int main(){
    int  **a,b;
    a = new int*[2];
    
    cout<<"Enter the '2x2'  matrix element\n";
    for(int i=0;i<2;i++){
        for(int j = 0;j <2;j++){
            cin>>a[i][j];
        }
    }
    b = deter(a);
    cout<<"The determinant of matrix is "<<b;
    return 0;

}