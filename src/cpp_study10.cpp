#include <iostream>
using namespace std;
int main(){
    int num1 = 8;
    int num2 = 8;
    int num3 = 8;
    num1 = num2 + 5;
    num2 += 5;
    num3 =+ 5;

    cout << "연산자에 의한 결과값 : " << num1 << endl;
    cout << "+= 연산자에 의한 결과값 : " << num2 << endl;
    cout << "=+ 연산자에 의한 결과값 : " << num3;
    return 0;
}