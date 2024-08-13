#include <iostream>
using namespace std;
int main(){
    int i;
    float sum = 0;
    for (i=0; i <1000; i++)
    {
        sum += 0.1;
    }
    cout << "0.1을 1000번 더한 합계는" << sum << "입니다";
    return 0;
} //실수를 가지고 수행하는 모든 연산에는 오차가 존재함