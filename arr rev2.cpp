#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l=0,r=n-1;
    while(l<r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
    for(int ele:arr)
        cout<<ele<<" ";

    return 0;
}