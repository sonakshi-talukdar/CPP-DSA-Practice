#include <iostream>
using namespace std;
class App{
    public:
        void dis1(){cout << "dis 1" << endl;}
        void dis2(){cout << "dis 2" << endl;}
        void dis3(){cout << "dis 3" << endl;}
};
int main(){
    App *obj;
    obj->dis1();
    obj->dis2();
    obj->dis3();
    return 0;
    
}