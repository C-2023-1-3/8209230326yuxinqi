#include<iostream>
using namespace std;
int n;
void count(const char s[], int counts[]){
	for(int i=0;i<n;i++){
		if('a'<=s[i]&&s[i]<='z'){
			int a=(int)s[i]-96;
			counts[a]++;
		}	
	}
}
char s[800080];
int counts[30];
int main(){
	cout<<"Enter a string:";
	cin>>s;
	cout<<endl;
	n=sizeof(s);
	count(s,counts);
	for(int i=1;i<=26;i++){
		cout<<char(i+96)<<":"<<counts[i]<<"times"<<endl;
	}
	return 0; 
}
