#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int count = 0;
    for(int ele:arr) // for eac enhanced for loop
        count++;
    cout << count;
}
