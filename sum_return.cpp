#include<iostream>

using namespace std;
// FUNCTIONAL WAY 
int f(int a){
    if(a==0)
        return 0;
    return (a+f(a-1));
    
}
int main(){
    int n, s=0;
    cin>>n;
    cout<<f(n);
}