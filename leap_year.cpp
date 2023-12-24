#include<iostream>
 #include <stdio.h>      
 #include <time.h>   
 using namespace std;
 int main() {
    int d,m,y;
    string mn,lp;
    cout<<"enter day,month and year "<<endl;
    cin>>d>>m>>y;
    switch(m){
        case 1 : mn = "january";break;
        case 2 : mn = "feburary";break;
        case 3 : mn = "march";break;
        case 4 : mn = "april";break;
        case 5 : mn = "may";break;
        case 6 : mn = "june";break;
        case 7 : mn = "july";break;
        case 8 : mn = "august";break;
        case 9 : mn = "september";break;
        case 10 : mn = "october";break;
        case 11 : mn = "november";break;
        case 12 : mn = "december";break;

    }
    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                lp = "leap";
            }
            else lp = "not leap";

        }
        else{
            lp = "leap";
        }


    }
    else lp = "not leap";
    cout<<mn<<'\t'<< d<<','<<y<<"the given year is"<<y<<lp<<"year"<<endl;
    return 0;
 }