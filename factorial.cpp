
#include<iostream>
using namespace std;
// PARAMETERISED WAY
void f(int a, int b){
    if(a==0){
        cout<<b;
        return;
    }
    f(a-1,b*a);
    
}
int main(){
    int n, s=1;
    cin>>n;
    f(n,s);
}