#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int tar = 4;
    for(int i = 0; i<n; i++)
    {
        if( tar == arr[i]){
            cout << "Found at " <<i<< endl;
            return 0; // terminate the function
        }
    }
     cout << "Not Found "<< endl;
}