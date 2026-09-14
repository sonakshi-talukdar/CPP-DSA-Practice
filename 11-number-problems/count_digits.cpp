#include <iostream>
using namespace std;

int main(){
    int n = 12345;
    int digit;
    int count = 0;

    while (n > 0){
        digit = n % 10;
        n/=10;
        count += 1;
    }
    cout << count;
}