#include<iostream>
#include <string>
using namespace std;


int main(){
    int n;
    string op;
    double s=0;

    cout<<"\nEnter the number:";
    cin>>n;
    s=n;
    while(2>1){
        
        cout<<"Enter the operator:";
        cin>>op;

        if(op!="="){

        
        
        cout<<"Enter the number:";
        cin>>n;
        }
        

        if(op=="+"){
            s+=n;
        }
        if(op=="-"){
            s-=n;
        }
        if(op=="*"){
            s*=n;
        }
        if(op=="/"){
            s/=n;
        }

        if(op=="="){
            cout<<"The result is "<<s<<endl;
            break;
        }

        
        
    }
}