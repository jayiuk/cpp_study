#include <iostream>
using namespace std;
int main(){
    int num1 = 3.1415;
    int num2 = 8.3E12;
    double num3 = 5;
    double result1 = 5 + 3.14;
    double result2 = 5.0f + 3.14;

    cout << "저장된 값은" << num1 << "입니다" << endl;
    cout << "저장된 값은" << num2 << "입니다" << endl;
    cout << "저장된 값은" << num3 << "입니다" << endl;
    cout << "계산 결과는" << result1 << "입니다" << endl;
    cout << "계산 결과는" << result2 << "입니다";

    return 0;
}//C++에서 자동 타입 변환되는 방향
// char -> shor -> int -> long -> float -> double -> long double