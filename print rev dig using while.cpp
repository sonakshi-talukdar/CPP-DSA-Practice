#include <iostream>
using namespace std;

int main(){
    int n = 2468;
    int digits;

    while (n > 0){
        digits = n % 10;
        n /= 10;
        cout << digits << "\n";

    }
}