#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a;
    cout << "Enter the first number: " << a << endl;
    cin >> b;
    cout << "Enter the second number: " << b << endl;
    int c;
    c = b;
    b = a;
    a= c;
    cout << " a " << a << endl;
    cout << " b " << b << endl;
    return 0;
}