#include<iostream>
using namespace std ;
template <class w>
void sort(w *a, int &n){
    for(int i = 0 ;i<n;i++){
        for(int j = 0;j<i;j++){
            w temp;
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void search(int *a , int &n , int &target , int &found, int &location){
    int left = 0;
    int right = n -1;
    
    found = 0;
    while(!found && (left<=right)){
        location = (left + right)/2;
        if(target == a[location]){
            found = location;
        }
        else if(location < target){
            left = location +1;
            
        }
        else{
            right = location -1;
        }

    }
}
int main(){

    int a[9] = {1,2,3,5,32,87,543,11,42} , target , found , n,location;
    n = sizeof(a)/sizeof(int);
    cout<<n<<endl;
    cout<<"Enter the number to know the location ";
    cin>>target;
    search(a,n,target,found,location);
    cout<<location;

    
    



  return 0;
}