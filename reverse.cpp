#include <iostream>
using namespace std;

int main(){
    int num = 12345;
    int rev = 0;

    while(num > 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
}