#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
using namespace std ;
class biling{
  char name[30], address[30],month[10], horoscope[20],f[5],time[10];
  long long int no;
  int  yr,mr,dr , y , m , d;
  public:

    void add(){
      ofstream of;
      of.open("bill.txt",ios::app|ios::binary);
      cout<<"enter the namme of customer : ";
      getchar();
      cin.getline(name,29);
      cout<<"enter the address : ";
      //cin.ignore();
      cin.getline(address, 29);
      cout<<"enter the phone number : ";
      cin>>no;
      cout<<"Enter date of birth y/m/d : ";
      cin>>y>>m>>d;
      getchar();
      cout<<"Enter the time of bith : ";
      cin.getline(time,9);
      cout<<"Enter  PM or AM : ";
      cin.getline(f,4);
      cout<<"Enter your horoscope : ";
      cin.getline(horoscope,19);
      cout<<"Enter the current year / month / day : ";
      cin>>yr>>mr>>dr;
      switch(m){
        case 1 : strcpy(month,"Baisakh");break;
        case 2 : strcpy(month,"Jestha");break;
        case 3 : strcpy(month,"Asar");break;
        case 4 : strcpy(month,"Shrawan");break;
        case 5 : strcpy(month,"Bhadra");break;
        case 6 : strcpy(month,"Aswin");break;
        case 7 : strcpy(month,"Kartik");break;
        case 8 : strcpy(month,"Mansir");break;
        case 9 : strcpy(month,"Poush");break;
        case 10 : strcpy(month,"Magh");break;
        case 11: strcpy(month,"Falgun");break;
        case 12: strcpy(month,"Chaitra");break;
      }
      
      of.write((char *)this ,sizeof(*this));
      of.close();
    }
    void display(){
      ifstream in;
      in.open("bill.txt",ios::binary);
      in.read((char *)this , sizeof(*this));
      while(!in.eof()){
        cout<<"Name          = "<<name<<endl;
        cout<<"Address       = "<<address<<endl;
        cout<<"Date of birth = "<<y<<" - "<<m<<"- "<<d<<endl;
        cout<<"Time          = "<<time<<" "<<f<<endl;
        cout<<"Month         = "<<month<<endl;
        cout<<"Horoscope     = "<<horoscope<<endl;
        cout<<"Phone number  = "<<no<<endl;
        if(mr>m){
          cout<<"Current age   = "<<(yr-y+1)<<" Year  and  "<<(mr-m)<<" Month "<<endl<<endl;
        }
        else{
          cout<<"Current age   = "<<(yr-y)<<" Year  and  "<<(m-mr)<<" Month "<<endl<<endl;
        }
        in.read((char *)this , sizeof(*this));
      }
      in.close();
    }
    void search(){
      char ch[30];
      cout<<"Enter the name for detail ";
      cin.getline(ch,29);
      ifstream in;
      in.open("bill.txt",ios::binary);
      in.read((char *)this , sizeof(*this));
      while(!in.eof()){
        if(!strcmp(ch,name)){
          cout<<"Name           = "<<name<<endl;
          cout<<"Address        = "<<address<<endl;
          cout<<"Date of birth  = "<<y<<" - "<<m<<"- "<<d<<endl;
          cout<<"Time of birth  = "<<time<<" "<<f<<endl;
          cout<<"Month of birth = "<<month<<endl;
          cout<<"Horoscope      = "<<horoscope<<endl;
          cout<<"Phone number   = "<<no<<endl;
          cout<<"Current age    = "<<(yr-y)<<endl<<endl;
          
        }
        in.read((char *)this , sizeof(*this));
      }
      in.close();
    }
    void destroy(){
      char ch[30];
      cout<<"Enter the name to delete ";
      getchar();
      cin.getline(ch,29);
      ifstream in;
      ofstream of;
      of.open("sill.txt",ios::binary);
      in.open("bill.txt",ios::binary);
      in.read((char *)this , sizeof(*this));
      while(!in.eof()){
        if(strcmp(ch,name)){
          of.write((char *)this , sizeof(*this));
        }
        in.read((char *)this , sizeof(*this));
      }
      in.close();
      of.close();
      remove("bill.txt");
      rename("sill.txt","bill.txt");
      cout<<"succcesssfully deleted "<<endl;

    }
    void update(){
      char ch[30];
      cout<<"Enter the name for update ";
      getchar();
      cin.getline(ch,29);
      fstream in;
      in.open("bill.txt",ios::out|ios::in|ios::binary);
      in.seekg(0);
      in.read((char *)this , sizeof(*this));
      while(!in.eof()){
        if(!strcmp(ch,name)){
            
            in.seekp(in.tellp()-sizeof(*this));
            cout<<"enter the  new name of customer ";
            cin.getline(name,29);
            cout<<"enter the  new address ";
            //cin.ignore();
            cin.getline(address, 29);
            cout<<"enter the new phone number ";
            cin>>no;
            in.write((char *)this ,sizeof(*this));
          }
          in.read((char *)this , sizeof(*this));
        }
        in.close();
    }
};
    
int main(){
    int n;
    biling b;
    while(1){
     system("cls");
     cout<<"1 : to add "<<endl;
     cout<<"2 : to display "<<endl;
     cout<<"3 : to update "<<endl;
     cout<<"4 : to destroy "<<endl;
     cout<<"5 : to exist "<<endl;
     cin>>n;
     switch(n){
      case 1: b.add();break;
      case 2: b.display();break;
      case 3: b.update();break;
      case 4: b.destroy();break;
      case 5: exit(1);
     }

     getch();
    }
    

    
    



  return 0;
}