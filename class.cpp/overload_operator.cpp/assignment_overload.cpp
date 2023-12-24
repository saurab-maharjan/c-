#include<iostream>
#include<string>
using namespace std;
class Student{
    
    int roll;
    public:
        string name;
        Student(string nam,int r){
            name = nam;
            roll = r;
        }
        
        Student(){
        }
        void operator=(Student a){
            name = a.name;
            roll = a.roll;
            //return *this;
        }
        void print(){
            cout<<"your name is"<<'\t'<<name<<"\t and your roll is "<<roll<<endl;
        }
        

};
int main(){
    Student a("unish shrestha",9),b;
    b = a;
    b.print();
    a.name = "saurab\n";
    b.print();
    cout<<endl;
    a.print();
    
    return 0;

}