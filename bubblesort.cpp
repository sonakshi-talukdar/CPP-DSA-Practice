 #include <iostream>
 using namespace std;
 int main(){
    int arr[] = {30,20,40,50,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int ele:arr)
        cout<<ele<<" ";
 }