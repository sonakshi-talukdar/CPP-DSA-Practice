#include <iostream>
using namespace std;

int main(){

    int n = 1234;
    int count = 0;

    cin >> n;

    
    while (n > 0){
        n % 10;
        count += 1;
    }
    cout << count;
}