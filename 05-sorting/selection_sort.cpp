#include<iostream>
using namespace std;

int main(){
    int arr[] ={30,20,10,50,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int ele:arr)
        cout<<ele<<" ";
        return 0;
}