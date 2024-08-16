#include <iostream>
using namespace std;
int main(){
    int num1 = 3;
    int num2 = -7;
    bool result1, result2;
    result1 = (num1 > 0) && (num1 < 5); // 논리 AND 연산. 모두 참이면 1 반환
    result2 = (num2 < 0) || (num2 > 10); // 논리 OR 연산. 하나라도 참이면 1 반환

    cout << "&& result : " << result1 << endl;
    cout << "|| result : " << result2 << endl;
    return 0;
}