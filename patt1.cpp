#include<iostream>

using namespace std;

int main(){
    int k=5 , a=k;

    for (int i = 1; i <=5 ; i++)
    {
        for (int j = 1; j <=a; j++)
        {
            cout<<j<<" ";
            
        }
        a = k-i;
        cout<<"\n";
        
    }
    
}