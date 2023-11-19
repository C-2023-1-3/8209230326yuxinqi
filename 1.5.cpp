#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double c,f;
	cout<<"输入华氏度";
	cin>>f;
	c=(f-32)/1.8;
	cout<<"摄氏度"<<fixed<<setprecision(2)<<c<<endl; 
	return 0;
} 
