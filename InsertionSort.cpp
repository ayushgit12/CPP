#include<iostream>

using namespace std;

int main(){
    int arr[7] = {14,9,15,12,6,8,13};
    int j;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len ; i++){
        j = i;
        while(j>=0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0; i<len; i++)
        cout<<arr[i]<< " ";
}