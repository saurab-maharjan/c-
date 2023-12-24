#include<iostream>
using namespace std;
void read(int a[3][4]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }

}
void write(int a[3][4]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cin>>a[i][j];
        }
        
    }

}

int main(){
    int a[3][4];
    write(a);
    read(a);
    return 0;
}