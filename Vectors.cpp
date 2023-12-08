#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    
    vector<int>::iterator it = v.end();
    // auto it = v.end();
    it--;
    cout<<*(it)<<"\n";
    cout<<v.back()<<"\n";

    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }

    cout<<"\n";

    for(auto it:v){
        cout<<it<<" ";
    }

    // DELETING ELEMENTS

    v.erase(v.begin()+1,v.end()-1);

    // INSERTING
     
    return 0;
    }
