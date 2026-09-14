#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,2,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count;
    int tar = 2;
    for(int i = 0; i<n; i++){
        if (tar == arr[i]){
            count += 1;
        }
    }

}