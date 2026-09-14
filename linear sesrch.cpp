#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int tar = 4;
    int f = 0;
    int index = -1;
    for(int i = 0; i<n; i++)
    {
        if( tar == arr[i]){
            f = 1;
            break;
        }
    }
    if (f == 1){
        cout << "Found at " <<index<< endl;
    }
    else{
        cout << "Not Found " << index << endl;
    }
}