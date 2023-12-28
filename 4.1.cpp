#include<bits/stdc++.h>
using namespace std;
int s[11],a[800080],cnt=0;
int main(){
	//memset(a,0,sizeof(a));
	for(int i=1;i<=10;i++){
		int x;
		cin>>x;
		a[x]++;
		if(a[x]==1){
			cnt++;
			s[cnt]=x;
		}
	}
//	cout<<a[1]<<" "<<s[1]<<endl;
	for(int i=1;i<=cnt;i++){
		cout<<s[i]<<" ";
	}
	
	return 0;
}
