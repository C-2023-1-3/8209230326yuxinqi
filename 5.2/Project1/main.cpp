#include <iostream>  
#include <string>//��������ͷ�ļ���������
#include "student.h"
using namespace std;
int main(){
	Student stud;                //�������
	Student studl(007, "tcg", 'm');
	stud.setvalue();
	stud.display();              //ִ��stud�����display����
	return 0;
}
