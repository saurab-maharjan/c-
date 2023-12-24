#include<iostream>
#include<string>
using namespace std;
class Person{
    string name;
    int age;
    public:
        Person(string a = "Harry",int b = 1):name(a),age(b){}
        void print(){
            cout<<"Your name is\t"<<name<<"\tand you are\t"<<age<<"\tyears old"<<endl;
        }
        Person operator++(){
            ++age;
            return *this;
        }
        /*void operator++(){
            ++age;
        }*/
    
};
int main(){
    Person a,b;
    b = ++a;
    a.print();
    b.print();
    return 0;
}