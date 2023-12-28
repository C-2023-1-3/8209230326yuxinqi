#include <iostream>
#include"mytemperature.h"
double x;
using namespace std;
int main(){
    cout << "如果输入为摄氏度，请输入1" << endl;;
    cout << "如果输入为华氏度，请输入2"<<endl;
    int ch;
    cin >> ch>>x;
    if (ch == 1) {
        cout << celsius_to_fah(x) << endl;
    }
    else cout << fahrenheit_to_cels(x) << endl;
    return 0;
}