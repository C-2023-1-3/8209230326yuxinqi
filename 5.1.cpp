#include<bits/stdc++.h>
using namespace std; 
class Time{             // 定义Time类{
private:             // 数据成员为公用的
	int hour;
	int minute;
	int sec ;
public:
	void Cin(){
		cin>>this->hour>>this->minute>>this->sec;
	}
	void Cout(){
		cout<<this->hour<<"："<<this->minute<<"："<<this->sec<<endl;		
	}
};
int main(){
	Time a;
	a.Cin();
	a.Cout();
	return 0;
}

