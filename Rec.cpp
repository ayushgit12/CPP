#include<iostream>
using namespace std;

void f(int a){
    if(a<1)
        return;
    cout<<a<<endl;
    
    f(a-1);
    
    
}
int main(){
    int N;
    cin>>N;
    f(N);
}