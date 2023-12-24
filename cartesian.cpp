#include<iostream>
using namespace std ;
class cartesian{
	int x , y;
	public:
		
		cartesian(int a = 0 , int b = 0):x(a),y(b){}
		cartesian operator++(){
			cartesian temp;
			temp.x = ++x;
			temp.y = ++y;
			return temp;
		}
		cartesian operator++(int){
			cartesian temp;
			temp.x = x++;
			temp.y = y++;
			return temp;
		}
		cartesian operator+(cartesian a){
			cartesian temp ;
			temp.x = x+a.x;
			temp.y = y+a.y;
			return temp;
		}
		bool operator<(cartesian a){
			if((x+y)>(a.x+a.y)) return true;
			else return false;
		}
		friend cartesian operator-(cartesian a , cartesian b);
		friend ostream& operator<<(ostream &,cartesian &);
		friend istream& operator>>(istream &,cartesian &);
};
cartesian operator-(cartesian a , cartesian b){
	cartesian temp;
	temp.x = a.x-b.x;
	temp.y = a.y-b.y;
	return temp;
}
ostream& operator<<(ostream & out , cartesian &c){
	out<<"(x , y ) = ("<<c.x<<","<<c.y<<")"<<endl;
	return out;
}
istream& operator>>(istream & in , cartesian &c){
	cout<<"Enter the value of x and y "<<endl;
	in>>c.x>>c.y;
	return in;
}
int main(){
cartesian a ,b ,c,d;
cin>>a>>b;
cout<<a<<b;
if(a<b) cout<<"A is less than B"<<endl;
else cout<<"B is less than A"<<endl;





  return 0;
}