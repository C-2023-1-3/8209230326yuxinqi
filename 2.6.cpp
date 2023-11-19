#include<iostream>
#include<algorithm>
using namespace std;
int x,y,ans,cnt;
int main(){
	cin>>x>>y;
	int z=x*y;
	for(int i=1;i<=sqrt(z);i++){
		if(x%i==0&&y%i==0){
			cnt=i;
		}
	}
	int w=max(x,y); 
	for(int i=w;i<=z;i++){
		if(i%x==0&&i%y==0){
			ans=i;
			break;
		}
	}
	cout<<"最大公约数为"<<cnt<<" "<<"最小公倍数为"<<ans<<endl;
	return 0; 
}
