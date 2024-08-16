#include <iostream>
using namespace std;
int main(){
    int num1 = 15;
    int num2 = 8;

    cout << "~ operator result : " << (~num1) << endl;
    cout << "<< operator result : " << (num2 << 2) << endl;
    cout << "^ operator result : " << (num1 ^ num2) << endl;
    cout << "| operator result : " << (num1 | num2) << endl;
    cout << "& operator result : " << (num1 & num2) << endl;
    cout << ">> operator result : " << (num2 >> 2) << endl;

    return 0;
}