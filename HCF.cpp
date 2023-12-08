#include<iostream>
using namespace std;

int main(){
    int a, b, g=0;
    cin>>a;
    cin>>b;
    
    // for (int i = 1; i*i <= b; i++)
    // {
    //     // if(i>a)
    //     //     break;
    //     if((a%i==0 && b%i==0) || ((a%(b/i)==0 && b%(b/i)==0)) )
    //         g=(b/i);
    // }
    // cout<<"\n"<<g<<endl;
    
    while(a>0 && b>0){
        if(a>b)
            a=a%b;
        else
            b=b%a;
    }
    if(a==0)
        cout<<b<<endl;

    if(b==0)
        cout<<a<<endl;
}