#include <iostream>  
#include <string>//将类声明头文件包含进来
#include "student.h"
using namespace std;
int main(){
	Student stud;                //定义对象
	Student studl(007, "tcg", 'm');
	stud.setvalue();
	stud.display();              //执行stud对象的display函数
	return 0;
}
