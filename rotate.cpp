#include<iostream>
using namespace std;
int main(){
    int a[3][3],b[3][3],i,j,m,n;
    cout<<"enter element in 3x3 matrix\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    
    for(j=0;j<3;j++){
        for(m=2,n=0;m>=0,n<3;m--,n++){
            a[j][n] = b[m][j];
            
        }
        
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    return 0;
}