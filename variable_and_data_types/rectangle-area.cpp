#include<iostream>
using namespace std;

int main(){
    int length;
    cout << "enter the length of the rectangle : ";
    cin >> length;
    int breadth;
    cout << "enter the breadth of the rectangle : ";
    cin>> breadth;
    int area = length * breadth;
    cout << "the area of the rectangle is : " << area << endl;
    return 0;
}