#include<iostream>
using namespace std;
class Application
{
    public:
    void dis1(){   //inline function 
        cout<<"Hi"<<endl;
    }
    void dis2(); //Non inline function 
};
void Application::dis2(){
    cout<<"Hello"<<endl;
}
int main(){
    Application obj;
    obj.dis1();
    obj.dis2();
}