#include<bits/stdc++.h>
using namespace std;
string a;
int cnt1,cnt2,cnt3,cnt4;
int main(){
	getline(cin,a);
	for(int j=0;j<a.length();j++){
		if(a[j]>='a'&&a[j]<='z'){
			cnt1++;	
		}
		else if(a[j]>='A'&&a[j]<='Z'){
			cnt1++; 
		}
		else if(a[j]==32){
			cnt2++;
		}
		else if(a[j]>='1'&&a[j]<='9'){
			cnt3++;
		}
		else cnt4++;
	}
	cout<<"Ӣ����ĸ����Ϊ"<<cnt1<<endl;
	cout<<"���ָ���Ϊ"<<cnt3<<endl;
	cout<<"�ո����Ϊ"<<cnt2<<endl;
	cout<<"�������Ÿ���Ϊ"<<cnt4<<endl;
	return 0;
}
