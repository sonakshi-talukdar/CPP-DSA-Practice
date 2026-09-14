#include <iostream>
using namespace std;
class App{
    public:
        int *data;
        void assign(int a){
            data=&a;
        }
        void dis(){
            cout << *data << endl;
        }
};
int main(){
    App obj;
    int a = 10;
    obj.data = &a;
    obj.dis();
    return 0;
    
}