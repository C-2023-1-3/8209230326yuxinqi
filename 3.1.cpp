#include<iostream> 
using namespace std;
#define ll long long
ll exgcd(ll a,ll b){
	if(a%b==0){
		return b;
	}
	return exgcd(b,a%b);
} 
ll a,b;
int main(){
	cin>>a>>b;
	cout<<"���Լ����"<<exgcd(a,b)<<endl;
	cout<<"��С��������"<<a*b/exgcd(a,b)<<endl;
	return 0;
}
