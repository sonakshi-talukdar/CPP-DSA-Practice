#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double num1, num2, sum;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter Second number";
    cin >> num2;
    sum = num1 + num2;
    cout << "Sum: " << fixed << setprecision(5) << sum;
    return 0;
}