#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    unsigned seed = time(NULL);
    srand(seed);
    int min,max,range;
    cout<<"enter minimum and maximum number of given range " <<endl;
    cin >> min >> max;
    range = max-min+1;
    for(int i=0;i<10;i++){
        int r = rand()/100%range+min;
        cout<<r<<endl;
    }
    return 0;

}