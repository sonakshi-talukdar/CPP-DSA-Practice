#include <iostream>
using namespace std;
void fun(int a, int b = 0)
{
    cout<< a+b << endl;
}
int main(){
    fun(10);
    return 0;
}