#include<iostream>
using namespace std;

int main(){
    vector<int> arr;
    arr.emplace_back(1);
    arr.emplace_back(3);
    arr.emplace_back(5);
    cout<<arr.size();

}