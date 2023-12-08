// Print 1 to N using BackTracking, i.e. Don't use +1

#include<iostream>
using namespace std;

void f(int a,int b){
    if(a<1)
        return;
    f(a-1,b);
    cout<<a<<endl;
}

int main(){
    int n;
    cin>>n;
    f(n,n);
}