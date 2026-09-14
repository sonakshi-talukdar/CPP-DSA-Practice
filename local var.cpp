#include <iostream>
using namespace std;
int a  = 100;
void dis(){
    int a = 10;
    a++;
    cout << a<< endl;
}
int main(){
    dis();
    cout<<a<<endl;
}