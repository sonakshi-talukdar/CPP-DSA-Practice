#include <iostream>
using namespace std;

int main(){
    int num = 11;
    int p = 0;

    for( int i = 1; i<=num; i++){
        if(num % i == 0)
            p++;
    }
    if (p == 2)
        cout << "yes";
    else
        cout << "No"; 
}