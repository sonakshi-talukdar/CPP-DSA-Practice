#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s = 0, e = n-1;
    int tar = 30;
    while(s <= e){
        int mid = (s + e)/2;
        if(tar == arr[mid]){
            cout<<mid<<endl;
            return 0;
        }
        else if(tar>arr[mid]){
            s = mid + 1;
        }
        else if(tar<arr[mid])
            e = mid - 1;
    }
    cout<<-1;
}