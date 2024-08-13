#include <iostream>
using namespace std;
int main(){
    int num1 = 1;
    int num2 = 4;

    double result = num1/num2; // 산술 연산에 대한 결과값은 피연산자와 같은 데이터타입 -> 피연산자가 int형이므로 결과도 int형
    double result2 = (double) num1 / num2;
    double result3 = double (num1) / num2; // 이 부분은 c++에서만 적용 가능. c에서는 적용 안됨

    cout << "result에 저장된 값은" << result << "입니다" << endl;
    cout << "result2에 저장된 값은" << result2 << "입니다" << endl;
    cout << "result3에 저장된 값은" << result3 << "입니다";

    return 0; 
}