#include <iostream>
#include <string>
#include"student.h"
using namespace std;//��Ҫ©д���У��������ͨ����
void Student::display() {         //�����ⶨ��display�ຯ��
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::setvalue() {
    cin >> num >> name >> sex;
}
