#include<iostream>
using namespace std;

int main(){
    int N;
    vector<int> v;
    cin>>N;
    for(int i=1; i<=sqrt(N); i++){
        if(N%i==0){
            v.emplace_back(i);
            if(N/i!=i)
                v.emplace_back(N/i);
        }
    }
    sort(v.begin(),v.end());
    for(auto i:v)
        cout<<i<<" ";
}