#include <iostream>
using namespace std;
int main(){
    cout << fixed;			// 소수점의 자릿수를 고정해서 표현함.
	cout.precision(20);    // 소수점의 자릿수를 20으로 설정
    float num1 = 3.1415926535897932; //float타입의 유효 자릿수는 소수점 6자리
    cout << "num1에 저장된 값은" << num1 << endl;
    double num2 = 3.1415926535897932; //double 타입의 유효 자릿수는 소수점 15자리
    cout << "num2에 저장된 값은" << num2 << endl;
    return 0;
}