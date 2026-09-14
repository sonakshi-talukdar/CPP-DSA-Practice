#include <iostream>
using namespace std;

int main(){
    int num = 7;
    for(int i = 1; i <=num; i++){
        if(num % i == 0){
            cout << "Hi" << endl;
        }
    }
}
