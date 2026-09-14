#include <iostream>
using namespace std;

int main(){
    int n = 58321;
    int digit;
    int sum = 0;

    while (n > 0){
        digit = n % 10;
        n /= 10;
        if (digit > 5){
            sum += digit;
        }
    }
    cout << sum;
}