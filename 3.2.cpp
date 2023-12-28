#include<iostream>
#include<string.h>
using namespace std;
int p[100000001],tot=1;
bool ip[100000001];
void phi(){
	for(int i=2;i<=2000;i++){
		if(ip[i]){
			p[tot++]=i;
		}
		for(int j=1;j<=tot&&i*p[j]<=2000;j++){
			ip[i*p[j]]=0;
			if(i%p[j]==0) break;
		}
	}
}
bool is_prime(int num){
	if(ip[num]){
		return true;
	}
	else return false;
}
int main(){
	memset(ip,1,sizeof(ip));
	phi();
	int cnt=0;
	for(int i=1;i<=200;i++){
		cout<<p[i]<<" ";
		cnt++;
		if(cnt==10){
			cout<<endl;
			cnt=0;
		} 
	}
	return 0;
} 
