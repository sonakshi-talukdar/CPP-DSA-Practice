#include <iostream> 
using namespace std; 
 
int main(){ 
    int n = 234; 
    int product = 1; 
    int digit; 
 
    while (n > 0){ 
        digit = n % 10; 
        n /= 10; 
        product *= digit; 
    } 
    cout << product; 
}