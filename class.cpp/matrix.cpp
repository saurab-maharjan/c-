#include<iostream>
#include<iomanip>
using namespace std ;
class matrix{
    int a[3][3];
    public:
        matrix(){}
        void setup(){
            cout<<"enter the 3x3 matrix element"<<endl;
            for(int i = 0;i<3;i++){
                for(int j = 0;j<3;j++){
                    cin>>a[i][j];
                }
            }
        }
        matrix trans(){
            matrix b;
            for(int i = 0;i<3;i++){
                for(int j = 0;j<3;j++){
                    if(i == j){
                        b.a[i][j] = a[i][j];
                    }
                    else{
                        b.a[i][j] = a[j][i];
                    }
                }
            }
            return b;
        
        }
        void print(){
            for(int i = 0;i<3;i++){
                for(int j = 0;j<3;j++){
                    cout<<setw(10)<<a[i][j]<<setw(10);
                }
                cout<<endl;
            }
            cout<<endl;
        }
};
int main(){
    matrix a,b;
    a.setup();
    b = a.trans();
    a.print();
    b.print();



  return 0;
}