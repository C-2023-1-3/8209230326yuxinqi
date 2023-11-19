#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
double ans;
int main(){
	double x,y,z;
	cin>>x>>y>>z;
	vector<double> a{x,y,z};
	if(x+y<z||x+z<y||y+z<x||abs(x-y)>z||abs(x-z)>y||abs(y-z)>x){
		cout<<"无法构成三角形"<<endl; 
		return 0;
	} 
	ans=x+y+z;
	cout<<ans<<endl;
	sort(a.begin(),a.end());
	auto it=unique(a.begin(),a.end());
	a.erase(it,a.end());
	if(a.size()<3){
		cout<<"是等腰三角形"<<endl; 
	}
	else cout<<"不是等腰三角形"<<endl;
	return 0;
}
