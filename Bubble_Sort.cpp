#include<iostream>
using namespace std;

int main(){
    int len=6;
    int arr[6]={13,46,24,52,20,9};
    for(int i=len-1; i>=1; i--){
        int didSwap=0;
        for (int  j = 0; j <=i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap=1;
            }
        }
        if(didSwap==0)
            break;
        
    }
    for(int i=0;i<len; i++)
        cout<<arr[i]<<" ";

}