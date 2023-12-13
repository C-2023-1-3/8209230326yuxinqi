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
	cout<<"最大公约数："<<exgcd(a,b)<<endl;
	cout<<"最小公倍数："<<a*b/exgcd(a,b)<<endl;
	return 0;
}
