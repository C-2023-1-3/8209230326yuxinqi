#include<iostream>
using namespace std;
double ans=0;
class P{
	public :
		int num;
		double grade;
		void Max(){
			cin>>this->num>>this->grade;
			ans=max(ans,this->grade);
		}	
}a[5];
int main(){
	for(int i=1;i<=5;i++){
		a[i].Max();
	}
	cout<<ans<<endl;
	return 0;
}
