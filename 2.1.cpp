#include<iostream>
using namespace std;
int main(){
	char a;
	cin>>a;
	if(a>='a'&&a<='z'){
		cout<<char(a-32)<<endl;
	}
	else cout<<int(a+1);
	return 0;
} 
