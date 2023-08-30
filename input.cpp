#include<iostream>
using namespace std;

int main(){
    int age;
    // cout<<"Enter a number: \n";
    // cin>>a;
    // cout<<"The no given is "<<a<<'\n';

    cout<<"Enter a no \n";
    cin>>age;

    switch (age)
    {
    case 1:
        cout<<"One\n";
        break;
    
    case 2:
        cout<<"Two\n";
        break;
    
    default:
        cout<<"greater than Two\n";
    }
}
