#include <iostream>
using namespace std;

int main(){
    int n = 846;

    int digit = n % 10;
    cout << digit << "\n";
    n/= 10;

    digit = n % 10;
    cout << digit << "\n";
    n /= 10;
    //cout << n;
    digit = n % 10;
    cout << digit << "\n";

}

