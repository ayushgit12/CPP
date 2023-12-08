#include<iostream>

using namespace std;

int main(){
    int arr[6] = {9, 6,1,2,10,5};
    int len= sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<len; i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
            }
    }

    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}