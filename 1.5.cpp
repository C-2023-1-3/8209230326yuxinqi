#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double c,f;
	cout<<"���뻪�϶�";
	cin>>f;
	c=(f-32)/1.8;
	cout<<"���϶�"<<fixed<<setprecision(2)<<c<<endl; 
	return 0;
} 
