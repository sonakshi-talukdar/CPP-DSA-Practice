#include <iostream>
using namespace std;
void change(int n){
    n = 100;
}
int main(){
    int n = 10;
    change(n);
    cout<<n<<endl;
}