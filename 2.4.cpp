#include<iostream>
using namespace std;;
int main(){
	double a,b;
	char s;
	cin>>a>>s>>b;
	if(s=='+'){
		cout<<a+b<<endl;
	}
	if(s=='-'){
		cout<<a-b<<endl;
	}
	if(s=='*'){
		cout<<a*b<<endl;
	}
	if(s=='/'){
		if(b==0){
			cout<<"非法"<<endl; 
		}
		else cout<<a/b<<endl;
	}
	if(s!='+'&&s!='-'&&s!='/'&&s!='*')cout<<"非法"<<endl;
	return 0; 
}
