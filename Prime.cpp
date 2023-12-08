#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // for (int i = 2; i < n; i++)
    // {
    //     if(n%i==0)
    //     {
    //         cout<<"Not Prime";
    //         return 0;

    //     }
    // }

    // T.C = O(sqrt(n)-2)
    for(int i=2; i*i<n; i++){
        if(n%i==0 || n%(n/i)==0){
            cout<<"Non Prime";
            return 0;
        }
    }
    cout<<"Prime";
}