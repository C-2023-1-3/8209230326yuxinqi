#include<bits/stdc++.h>
using namespace std; 
class Time{             // ����Time��{
private:             // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec ;
public:
	void Cin(){
		cin>>this->hour>>this->minute>>this->sec;
	}
	void Cout(){
		cout<<this->hour<<"��"<<this->minute<<"��"<<this->sec<<endl;		
	}
};
int main(){
	Time a;
	a.Cin();
	a.Cout();
	return 0;
}

