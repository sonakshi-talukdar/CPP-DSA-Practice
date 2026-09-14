#include <iostream>
#include <iomanip>
using namespace std;
class F1 {
    private:
        int sec = 10;
        friend void f2(F1);
};
void f2(F1 o){
    cout<<o.sec<<endl;
}
int main(){
    F1 obj;
    f2(obj);
}