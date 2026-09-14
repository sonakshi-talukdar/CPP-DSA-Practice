#include <iostream>
using namespace std;
struct Student{
    float roll;
    int age;
};
int main(){
    Student s;
    s.roll = 10.1;
    cout<<s.roll<< endl;
    s.age = 20;
    
    cout<<s.age<< endl;;
    cout<<s.roll<<" "<< s.age<< endl;
    return 0;
}