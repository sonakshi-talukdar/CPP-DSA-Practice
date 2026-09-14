#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float a = 10.123456;
    cout<<setw(10)<<"Sakthi"<<endl;
    cout<<fixed<<a<<endl;
    cout<<fixed<<setprecision(4)<<a<<endl;
}