#include <iostream>
#include<cmath>
using namespace std;
void dis1(int arr[], int n){
    for(int i = 0;i<n;i++)
        cout<<arr[i]<<" ";

void dis2(int arr2[][3],int r, int c)
{
    for(int i= 0, i<r; i++){
        for (int j=0;j<c;j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
}
int main()
{
    int arr[] = {1,2,3};
    dis1(arr,3);
    int arr2[][3] = {
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };
    return 0;
}
