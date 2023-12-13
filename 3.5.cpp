#include<iostream>
using namespace std;
int t=10,ans=1;
int f(){
	if(t==1){
		return ans;
	}
	ans=(ans+1)*2;
	t--; 
	return f(); 
}
int main(){
	cout<<f()<<endl;
	return 0;
}
