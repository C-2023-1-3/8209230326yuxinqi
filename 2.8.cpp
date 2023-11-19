#include<iostream>
#include<algorithm>
using namespace std;
double a,X;
double Sqrt(double x){
	double  x1=(x+a/x)/2;
	if(abs(x-x1)<0.00001){
		return x1;
	} 
	else return Sqrt(x1);
}
int main(){
	cin>>X;
	if(X<0){
		a=-X;
		cout<<"-"<<Sqrt(-X);	
	}
	else {
		a=X;
		cout<<Sqrt(X);	
	}
	
	return 0;
} 
