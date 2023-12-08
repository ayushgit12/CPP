#include<iostream>
using namespace std;

int main(){
    vector<int> nums;
    nums.emplace_back(1);
    nums.emplace_back(2);
    nums.emplace_back(0);
    nums.emplace_back(0);
    nums.emplace_back(5);
    nums.emplace_back(1);
    nums.emplace_back(7);
    int k=0;

    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]!= 0){
            nums[k] = nums[i];
            k++;
        }

    }
    for(int i=k; i<nums.size(); i++){
        nums[i] = 0;
    }
    for(auto it:nums)
        cout<<it<<" ";
    
}