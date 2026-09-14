#include <iostream>
using namespace std;

int main(){
    int arr2[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int r = sizeof(arr2)/sizeof(arr2[0]);
    int c = sizeof(arr2[0])/sizeof(arr2[0][0]);
    for(int i = 0; i<r;i++){
        for (int j = 0; i<c;i++ ){
            cout<<arr2[1][j]<<" ";
        }
    }
    cout<<endl;
}