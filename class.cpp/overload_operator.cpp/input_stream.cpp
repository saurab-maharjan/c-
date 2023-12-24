#include<iostream>
#include<string>
using namespace std;
class Employee{
    string name , address;
    float salary;
    friend istream& operator>>(istream&a,Employee &b){
        cout<<"Enter the name of employee\n";
        a>>b.name;
        a.ignore();
        cout<<"Enter the address of employee\n";
        a>>b.address;
        a.ignore();
        cout<<"Enter the salary of the employee\n";
        a>>b.salary;
    }
    friend ostream& operator<<(ostream&a,Employee &b){
        a<<b.name<<'\t'<<b.address<<'\t'<<b.salary<<endl;
    }
    public:
        Employee(string naam = "john sthrestha",string add = "lalitpur",float sal = 10000):name(naam),address(add),salary(sal){}

};
int main(){
    Employee j,k("kiran","pepsicola",90000);
    cout<<k;
    return 0;
}