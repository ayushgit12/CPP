#include<iostream>
using namespace std;

int main(){
        vector<int> arr;
        int s=0 , max=INT_MIN;

        arr.emplace_back(-2);
        arr.emplace_back(-3);
        arr.emplace_back(4);
        arr.emplace_back(-1);
        arr.emplace_back(-2);
        arr.emplace_back(1);
        arr.emplace_back(5);
        arr.emplace_back(-3);
        
        for (int i = 0; i < arr.size(); i++)
        {
            s+=arr[i];
            if(s>max)
                max = s;
            if(s<0)
                s=0;
            
        }
    cout<<max<<endl;
    
}