#include<iostream>
using namespace std;


int main(){
    
    vector<int> arr;
    arr.emplace_back(1);
    arr.emplace_back(2);
    arr.emplace_back(4);
    arr.emplace_back(4);
    arr.emplace_back(7);
    arr.emplace_back(7);
    
    int k=0;
    for(int i=1; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i] == arr[i-1])
            continue;

            
        arr[k] = arr[i-1];
        k++;
    }
    // cout<<k<<endl;
    cout<<"No of repeating elements = "<<sizeof(arr)/sizeof(arr[0]) - (k + 1)<<endl;
    
    
}