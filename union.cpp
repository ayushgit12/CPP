#include<iostream>
#include<map>
using namespace std;

int main(){
    vector<int>a;
    a.emplace_back(1);
    a.emplace_back(1);
    a.emplace_back(2);
    a.emplace_back(3);
    a.emplace_back(5);
    
    vector<int>b;
    b.emplace_back(2);
    b.emplace_back(3);
    b.emplace_back(4);
    b.emplace_back(4);
    b.emplace_back(5);
    b.emplace_back(6);

    map<int,int> uni;
    for(int i=0; i<a.size(); i++)
        uni[a[i]]=1;
    for(int i=0; i<b.size(); i++)
        uni[b[i]]=1;
    for(auto it:uni)
        cout<<it.first<<" ";
    
    
    
}