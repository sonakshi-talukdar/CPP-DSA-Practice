#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *p=&a;
    int **q = &p;
    cout<<a<<" "<<*p<<" "<<**q<<endl;
    cout<<&a<<" "<<*p<<" "<<*q<<endl;
    cout<<&p<<" "<<q<<endl;
    cout<<&q<<endl;
}