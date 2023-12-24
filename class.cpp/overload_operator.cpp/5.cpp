#include<iostream>
#include<iomanip>
using namespace std ;
class mat{
    int a[3][3];
    public:
        void getdata(){
            cout<<"enter the element for 3x3 matrix"<<endl;
            for(int i = 0;i<3;i++){
                for(int j = 0;j<3;j++){
                    cin>>a[i][j];
                }
            }
            cout<<endl;
        }
        void show(){
            for(int i = 0;i<3;i++){
                for(int j = 0;j<3;j++){
                    cout<<setw(10)<<a[i][j]<<setw(10);
                }
                cout<<endl;
            }

        }
        mat operator*(mat b){
            mat temp;
            for(int i = 0 ;i<3;i++){
                for(int j = 0;j<3;j++){
                    temp.a[i][j] = 0;
                    for(int k = 0 ;k<3;k++){
                        temp.a[i][j] += a[i][k] * b.a[k][j];

                    }
                }
            }
            return temp;

        }
};
int main(){
    mat a, b, c;
    a.getdata();
    b.getdata();
    c = a*b;
    c.show();


  return 0;
}