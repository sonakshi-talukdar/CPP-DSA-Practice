#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,2,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = -1;
    int tar = 2;
    for(int i = 0; i<n; i++){
        if (tar == arr[i]){
            index = i;
            break; // No break finds last occurance
        }
    }
    cout<<index<<endl;
}