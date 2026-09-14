#include <iostream>
using namespace std;
int main(){
    int n  = 234;
    int ones = n % 10;
    n /= 10;
    int tens = n % 10;
    n /= 10;
    int hundreds = n % 10;
    cout << ones + tens + hundreds;
}