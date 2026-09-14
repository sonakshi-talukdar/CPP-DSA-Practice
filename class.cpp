#include<iostream>
using namespace std;
class Application
{
    public:
    int roll;
    string name;
    void submit(){
        cout<<roll<<" "<< name<<endl;
    }
};
int main(){
    Application obj1;
    obj1.roll=10;
    obj1.name = "hey";
    obj1.submit();
}