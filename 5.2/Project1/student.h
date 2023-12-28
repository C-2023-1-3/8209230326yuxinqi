#pragma once
#ifndef STUDENT_H
#define STUDENT_H
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	Student() {};
	Student(int Num,const char Name[], char Sex) {
		num = Num;
		memcpy(name, Name, sizeof(Name));
		sex = Sex;
	}
	void setvalue();
private:
	int num;
	char name[20];
	char sex;
};
#endif