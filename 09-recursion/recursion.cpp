#include <iostream>
using namespace std;
 void dis(int n){
    if(n==0)
        return;
    else{
        cout<<"Hello"<<endl;
        dis(n-1);
    }
}
int main(){
    dis(5);
    for(int i = 1;i<=10;i++){
        cout<<i<<endl;
    }
}