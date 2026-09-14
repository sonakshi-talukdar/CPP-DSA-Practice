#include <iostream>
using namespace std;
int msin(){
    int num = 121;
    int rev;
    while(num > 0){
        int rem = num % 10;
        rev = (rev*10)+rem;
        num = num / 10;
    }
    if (num == rev)
        cout<< "Yes";
    else
        cout<<"No";
}