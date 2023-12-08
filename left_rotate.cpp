#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&nums, int a, int n){
        int i=a, j=n;
        while(j>=i){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        
        reverse(nums, 0, k-1);
        reverse(nums, k, nums.size()-1);
        reverse(nums, 0, nums.size()-1);
    }
int main(){
    vector<int> nums;
    nums.emplace_back(1);
    nums.emplace_back(2);
    nums.emplace_back(3);
    nums.emplace_back(4);
    nums.emplace_back(5);
    nums.emplace_back(6);
    nums.emplace_back(7);
    int k;
    cout<<"Enter the no of shifts"<<endl;
    cin>>k;
    rotate(nums, k);
    
    for(auto it:nums)
        cout<<it<<" ";
    cout<<"\n";


}