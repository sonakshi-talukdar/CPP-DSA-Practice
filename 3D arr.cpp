#include <iostream>
using namespace std;

int main(){
    int arr3[3][3][3] = 
    {
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {11,12,13},
            {14,15,16},
            {17,18,19}
        },
        {
            {21,22,23},
            {24,25,26},
            {27,28,29}
        }
    };
    int a = sizeof(arr3)/sizeof(arr3[0]);
    int r = sizeof(arr3[0])/sizeof(arr3[0][0]);
    int c = sizeof(arr3[0][0])/sizeof(arr3[0][0][0]);

    for(int i = 0; i<a; i++)   //array
    {
        for(int j = 0; j<r;j++)     //row
        {
            for(int k = 0; k<c; k++)  //column
            {
                cout<<arr3[i][j][k]<< " ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}