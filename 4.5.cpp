#include<iostream>
#include<string>
using namespace std;
string a,b;
char s1[800080],s2[800080];
int cnt1,cnt2,u=0,p[1000010];
bool flag;
int indexOf(char s1[],char s2[]){
	for(int i=1;i<cnt1;i++){
		while(u>0&&s1[i]!=s1[u]){
			u=p[u-1];
		}
		if(s1[u]==s1[i]){
			u++;
		}
		p[i]=u;
	}
	u=0;
	for(int i=0;i<cnt2;i++){
		while(u>0&&s1[u]!=s2[i]){
			u=p[u-1];
		}
		if(s2[i]==s1[u]){
			u++;
		}
		if(u==cnt1){
            printf("%d\n",i-cnt1+2);
			flag=true;
			u=p[u-1];
		}
	}
}
int main(){
	cout<<"Enter the first string: ";
	getline(cin,a);
	cout<<endl;
	cout<<"Enter the second string: ";
	getline(cin,b);
	int size1=a.length();
	int size2=b.length();
	for(int i=0;i<size1;i++){
		if(a[i]!=' '){
			s1[cnt1++]=a[i];
		 }
	}
	for(int i=0;i<size2;i++){
		if(b[i]!=' '){
			s2[cnt2++]=b[i];
 		}
	}
	cout<<"indexOf(\""<<a<<"\", \""<<b<<"\") is ";
	indexOf(s1,s2);
	if(!flag){
		cout<<-1<<endl;
	}
	return 0;
}
