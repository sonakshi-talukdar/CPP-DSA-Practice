#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,3,4,5,6};
    int p = 0;
    for(int i = 1; i<5; i++){
        p = 0;
        for(int j = 1; j<=arr[i]; j++){
            if (arr[i]%j == 0){
                p++;
            }
        }
        if(p == 2)
            cout <<arr[i];
    }
}