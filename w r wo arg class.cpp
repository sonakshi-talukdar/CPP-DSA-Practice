#include<iostream>
using namespace std;
class Application
{
    public:
        void sub(int,int);
    
};
void Application::sub(int a, int b){
    cout<<a-b<<endl;
}
int main(){
    Application obj;
    obj.sub(10,5);
}