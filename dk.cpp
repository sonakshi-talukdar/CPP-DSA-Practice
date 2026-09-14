#include <iostream>
#include <limits>
using namespace std;

int main(){
    char name[30];
    int rollno;

    cout << "Enter Name: ";
    cin.getline(name, 30);

    cout << "Enter Rollno: ";
    cin >> rollno;
    cout << "Name: "<<name<<endl;
    cout << "Rollno: "<<rollno;
    return 0;
}