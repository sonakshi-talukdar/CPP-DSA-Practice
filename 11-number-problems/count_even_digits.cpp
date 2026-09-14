#include <iostream>
using namespace std;

int main(){
    int n = 24681;
    int count = 0;
    int digit;

    while (n > 0){
        digit = n % 10;
        n /= 10;
        if (digit % 2 == 0){
            count++;
        }
    }
    cout << count;
}