#include <iostream>
using namespace std;
struct 
{
    int roll;
    int age;
    string name;
}s1,s2;
int main(){
     s1;
     s1.roll = 10;
     s1.age = 20;
     s1.name = "hello";

     cout<<s1.name<<" "<<s1.age<<" "<<s1.roll<<endl;

     s2;
     s2.roll = 20;
     s2.age = 30;
     s1.name = "hi";

     cout<<s2.name<<" "<<s2.age<<" "<<s2.roll;
     return 0;
}