#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,5};
    cout<<arr.front()<<" "<<arr.back()<<endl;
    cout<<arr[3]<<" "<<arr.at(3)<<endl;
    arr.push_back(6);
    arr.pop_back();
    arr.erase(arr.end()-2);
    for(int i = 0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    return 0;
}