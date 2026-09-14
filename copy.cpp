#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int dummy[size];
    for(int i = 0; i<size;i++){
        dummy[i] = arr[i];
    }
    for(int i = 0; i < size; i++){
        cout << dummy[i] << " ";
    }
}
