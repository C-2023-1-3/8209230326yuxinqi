#include<iostream>
#include<algorithm>
using namespace std;
int list1[88],list2[88],list3[188];
void merge(const int list1[],int size1,const int list2[],int size2,int list3[]){
	for(int i=1;i<=size1;i++){
		list3[i]=list1[i];
	}
	for(int i=size1+1;i<=size1+size2;i++){
		list3[i]=list2[i-size1];
	}
	sort(list3+1,list3+size1+size2+1);
}
int main(){
	int n,m;
	cout<<"Enter list1:"; 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>list1[i];
	}
	cout<<endl;
	cout<<"Enter list2:";
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>list2[i];
	}
	merge(list1,n,list2,m,list3);
	cout<<"The merged list is"; 
	for(int i=1;i<=m+n;i++){
		cout<<list3[i]<<" ";
	}
	
	return 0;
}


