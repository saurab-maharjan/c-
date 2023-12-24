#include<iostream>
using namespace std;
void max_min(){
    int min,max,n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(max= min = n;n>0;){
        if(n<min) min = n;
        else if(n>max) max = n;
        cin>>n;
    }
    cout<<"the maximum and minimum in the given sequence is "<<max<<" "<<min<<endl;
}
int main(){
    max_min();
    return 0;
}