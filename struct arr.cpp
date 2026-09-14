#include <iostream>
using namespace std;
struct Student
{
    int roll;
    int age;
    string name;
};
int main(){
     Student s1[3];
     s1[0].roll = 10;
     s1[0].age = 20;
     s1[0].name = "hello";

     s1[1].roll = 20;
     s1[1].age = 30;
     s1[1].name = "hi";

     s1[1].roll = 30;
     s1[2].age = 30;
     s1[2].name = "hey";

     for (int i = 0;i<3;i++){
        cout<<s1[i].roll<<" "<<s1[i].age <<" "<< s1[i].name<<endl;   
    }
}