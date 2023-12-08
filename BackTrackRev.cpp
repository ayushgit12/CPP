#include<iostream>
using namespace std;

void f(int a, int b){
    if(a>b)
        return;
    f(a+1,b);
    cout<<a<<endl;
}

int main(){
    int n;
    cin>>n;
    f(1,n);
}
