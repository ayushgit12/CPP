#include<iostream>
using namespace std;


void merge(vector<int>&arr,int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<= arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }
        else{
            temp.emplace_back(arr[right]);
            right++;
        }


    }
    while(left<=mid){
        temp.emplace_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.emplace_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++)
        arr[i] = temp[i-low];

}

void Divide(vector <int> &arr,int low,int high){
    if(low==high)
        return;

    int mid = (low+high)/2;
    Divide(arr,low,mid);
    Divide(arr,mid+1,high);
    merge(arr,low,mid,high);
    
}


int main(){
    vector<int> arr;
    int len;
    cin>>len;
    cout<<"Enter the elements"<<endl;
    for (int i = 0; i < len; i++)
    {
        int g;
        cin>>g;
        arr.emplace_back(g);
    }
    len=arr.size();
    
    
    Divide(arr,0,len-1);
    for(auto it:arr)
        cout<<it<<" ";

}