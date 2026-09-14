#include <iostream>
using namespace std;

class App
{
    public:
        static int a;
        static void dis()
        {
            cout<<"Hello";
        }
};
int App::a = 10;
int main(){
    cout<<App::a;
    App::dis();
}