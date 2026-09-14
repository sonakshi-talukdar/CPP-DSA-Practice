#include <iostream>
using namespace std;
int main(){
    int arr[]={30,20,40,50,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i<n;i++){
        int min = i;//0
        for(int j=i+1;j<n;j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min]= temp;
    }    
    for(int ele:arr)
    cout<<ele<<" ";
}