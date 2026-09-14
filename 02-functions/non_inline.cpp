#include<iostream>
using namespace std;
class Application
{
    public:
        void fun1(){
            cout<<"hello"<<endl;
        }
        static void fun2()
        {
        cout<<"hi"<<endl;
        }
};
int main(){
    Application obj;
    obj.fun1();
    Application::fun2();
}