#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &ref = a;
    cout<<a<<" "<<ref<<endl;
    cout<<&a<<" "<<&ref<<endl;
    ref = 100;
    cout<<a<<" "<<ref<<endl;
}