#include <iostream>
using namespace std;
int main(){
    int num1 = 8;
    int num2 = 8;
    int num3 = 8;
    int num4 = 8;
    int result1, result2, result3, result4, result5, result6;

    result1 = --num1 + 5;
    result2 = num2-- + 5;
    result3 = ++num3 + 5;
    result4 = num4++ + 5;
    result5 = num4 + 5;
    result6 = num2 + 5;

    cout << "result1 : " << result1 << endl;
    cout << "result2 : " << result2 << endl;
    cout << "result3 : " << result3 << endl;
    cout << "result4 : " << result4 << endl;
    cout << "result5 : " << result5 << endl;
    cout << "result6 : " << result6 << endl;
    return 0;
}