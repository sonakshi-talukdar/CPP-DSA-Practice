#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    int p = 0;
    int sum = 0;
    for(int i=0;i<size;i++){
        for(int j = 1; j<=arr[i]; j++){
            if(arr[i]%j==0){
                p++;
            }
            if(p == 2)
            cout << arr[i] << " ";
            
        }
    }
}