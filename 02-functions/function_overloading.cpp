#include <iostream>
#include <iomanip>
using namespace std;
class App {
    public:
        void add(int a){
            cout<<a<<endl;
        }
        void add(int a, int b){
            cout<<a+b<<endl;
        }
        void add(int a,int b, int c){
            cout<<a+b+c<<endl;
        }
};
int main(){
    App obj;
    obj.add(1,1,1);
    obj.add(12);
    obj.add(1,2);
}