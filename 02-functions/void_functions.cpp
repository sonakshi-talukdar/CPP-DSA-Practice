#include <iostream>
using namespace std;

void check(int num){
    if(num%2 == 0)
        cout<<"yes"<<endl;
    else
        cout<<" No"<<endl;
}
int main(){
    check(2);
    check(8);
    check(10);
    return 0;
}