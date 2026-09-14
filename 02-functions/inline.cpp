#include<iostream>
using namespace std;
class Application
{
    public:
        void add(){
            int a = 10,b=10;
            cout<<a+b<<endl;
        }
        void sub(int a, int b){
            cout<<a-b<<endl;
        }
        int mul(){
            int a = 5;
            return a*a;
        }
        int divv(int a, int b){
            return a/b;
        }
};
int main(){
    Application obj;
    obj.add();
    obj.sub(10,5);
    cout<<obj.mul();
}