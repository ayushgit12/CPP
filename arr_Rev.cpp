// #include<bits/stdc++.h>
#include<iostream>

using namespace std;

void f(int i,int arr[],int n){
    if(i>=n/2)
        return;
        
    // SWAP PROCESS
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}

int main(){
    int len;
    cin>>len;
    
    int arr[len];
    for(int i=0; i<len; i++)
        cin>>arr[i];
    
    f(0,arr,len);
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}