#include<iostream>
using namespace std;
double a[11];
void pop_sort(){
	for(int i=1;i<=10;i++){
		for(int j=1;j<10;j++){
			if (a[j]>a[j+1]){
				swap(a[j],a[j+1]);	
			} 
		}
	}
}
int main(){
	for(int i=1;i<=10;i++){
		cin>>a[i];
	}
	pop_sort();
	for(int i=1;i<=10;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
