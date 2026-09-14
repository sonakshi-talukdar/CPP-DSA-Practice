#include <iostream>
#include <iomanip>
using namespace std;
class F1 {
    private:
        int sec = 10;
        friend class F2;
    
};

class F2
{
    public:
        void reveal(F1 o){
            cout<<o.sec<<endl;
        }
};
int main(){
    F1 o1;
    F2 o2;
    o2.reveal(o1);
}