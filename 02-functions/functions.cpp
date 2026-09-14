#include <iostream>
#include <cmath>
using namespace std;
void add();
void sub(int,int);
int mul();
int divv(int, int); // with return 

void add(){
    int a = 10, b = 10;
    cout<<a+b<<endl;
    sub(10,5);
}
//without return type with args
void sub(int a,int b){ 
    cout<<a-b<<endl;
}
// with return type without args
int mul(){
    int a = 5, b = 5;
    return a*b;
}
// with return type with arg
int divv(int a, int b){
    return a/b;
}

int main(){
    sub(10,5); 
    add();
    return 0;
