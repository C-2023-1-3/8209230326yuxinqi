#include <bits/stdc++.h>
using namespace std;
double ans=0,cnt=0;
int main(){
	for(int i=2;ans<=100;i*=2){
		ans+=i;
		cnt++; 
	}
	cout<<ans*0.8/cnt<<endl;
	return 0;
}
