#include<iostream>
using namespace std;
int main(){
    cout <<"\n\n Swap two numbers : \n";

    int a, b;
    cout << " Enter the first number: ";
    cin >> a;
    cout << " Enter the second number: ";   
    cin >> b;
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << "after swapping the 1st number is : "<< a << endl;
    cout << "after swapping the 2nd number is : "<< b << endl;
    return 0;
}