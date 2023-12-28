#include <iostream>
#include <string>
#include"student.h"
using namespace std;//不要漏写此行，否则编译通不过
void Student::display() {         //在类外定义display类函数
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::setvalue() {
    cin >> num >> name >> sex;
}
