#include <iostream>
#include <limits>
using namespace std;

int main(){
    int rollno;
    char name[30];
    cout << "Enter Rollno: ";
    cin >> rollno;
    cin.ignore();
    cout << "Enter Name: ";
    cin.getline(name, 30);

    cout << "Rollno: "<<rollno<<endl;
    cout << "Name: "<<name<<endl;
    return 0;
}