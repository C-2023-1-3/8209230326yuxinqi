#include<iostream>
using namespace std;
bool flag[105]={1};
int main(){
	for(int i=2;i<=50;i++){
		for(int j=i;j<=100;j+=(i+1)){
			if(flag[j]){
				flag[j]=false;
			}
			else flag[j]=true;
		}
	}
	for(int i=1;i<=100;i++){
		if(flag[i]){
			cout<<i<<" ";
		}
	}
	return 0;
} 
