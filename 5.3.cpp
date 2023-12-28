#include<iostream>
using namespace std;
class P{
	public :
		int a,b,c;
		void Cin(){
			cin>>this->a>>this->b>>this->c;
		}
		void Cout(){
			cout<<this->a*this->b*this->c<<endl;
		}
};
int main(){
	P s1,s2,s3;
	s1.Cin();
	s2.Cin();
	s3.Cin();
	s1.Cout();
	s2.Cout();
	s3.Cout();
	return 0;
} 
