#include<iostream>
using namespace std;

int main(){
    int num1 = 10;
    int num2 = 3;

    cout << (num1 = num2) << endl;
    cout << (num1 -= num2) << endl;
    cout << (num1 += num2) << endl;
    cout << (num1 += num2) << endl;
    cout << (num1 += num2) << endl<<endl<<endl;
    num1 += 3;
    cout << num1<< endl;
    num1 -= 3;
    cout << num1<< endl;
    num1 *= 3;
    cout << num1<< endl;
    num1 /= 3;
    cout << num1<< endl;
    num1 %= 3;
    cout << num1<< endl;
    num2 -= 3;
    cout << num2<< endl;
    num2 += 3;
    cout << num2<< endl;
    num2 *= 3;
    cout << num2<< endl;
    num2 /= 3;
    cout << num2<< endl;
    num2 %= 3;
    cout << num2<< endl;

    return 0;
}