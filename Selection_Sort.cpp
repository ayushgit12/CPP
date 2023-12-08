#include<iostream>
using namespace std;

int main(){
    int arr[6] = {13,46,24,52,20,9};
    int len= sizeof(arr) / sizeof(arr[0]);
    int k=0;
    for (int i = 0; i < len-1; i++)
    {
        k=i;
        for (int j = i; j < len; j++)
        {
            if(arr[k]>arr[j])
                k=j;
        }
        swap(arr[i],arr[k]);
        
    }
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    
}