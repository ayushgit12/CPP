
#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    int k;
    int i=0;
    cout<<"SHIFT??"<<endl;
    cin>>k;
    while(i<=k){
        v.emplace_back(v.begin());
        v.erase(v.begin());
    }
}
