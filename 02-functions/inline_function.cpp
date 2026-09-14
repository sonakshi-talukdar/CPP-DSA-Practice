#include <iostream>
using namespace std;
int fun(int num){
    return num;
}
inline int funn(int num){
    return num;
}
int main(){
    cout<<fun(10)<<endl;
    cout<<funn(10);
    return 0;
}