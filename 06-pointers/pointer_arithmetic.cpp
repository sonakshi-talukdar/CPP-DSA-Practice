#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int *ptr = arr;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr=ptr+2;
    cout<<*ptr<<endl;
}