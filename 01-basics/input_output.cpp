#include <iostream>
using namespace std;

int main(){
    int age;
    char grade;
    double salary;
    string name;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> salary;

    cout << "Enter grade: ";
    cin >> grade;

    cout << "\nStuent Details\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Salary: " << salary << "\n";
    cout << "Grade: " << grade << "\n";
    return 0;
}