#include<bits/stdc++.h>
using namespace std;
class Point{
	private :
		int x,y;
	public :
		Point(){
			x=60;
			y=80;
		}
	void setPoint(int i,int j){
		this->x+=i;
		this->y+=j;
	}
	void display(){
		cout<<"("<<this->x<<","<<this->y<<")"<<endl;
	}
};
int main(){
	Point k;
	k.setPoint(80,60);
	k.display();
	return 0;
}
