#include<iostream>
using namespace std;

int main(){
    int n , d=0;
    cin>>n;

    while(n!=0){
        // int r= n%10;
        d++;
        n/=10;
    }
    cout<<"\nNo of digits = "<<d;
}