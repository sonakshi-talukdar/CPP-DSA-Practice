#include <iostream>
using namespace std;

int main(){
    int n = 2468;
    int sum = 0;
    int digit;

    while (n > 0){
        digit = n % 10;
        n /= 10;
        sum += digit;
    }
    cout << sum;
}