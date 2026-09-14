#include <iostream>
using namespace std;
void fun(string str = "student")
{
    cout<<"Your name is "<<str<<endl;
}
int main(){
    fun("sakthive");
    fun();
    return 0;
}