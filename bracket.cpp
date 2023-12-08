#include<iostream>
#include<stack>
using namespace std;

int main(){

    string s;
    cin>>s;
    stack<char> ch;
    d=0;

    for(int i=0; i<s.length(); i++){
        char a = s[i];
        if(a==']'){
            if(s[i-1] == '[')
                ch.pop();
            else if (s[i-1] == '(' || ch=='{')
                d++;
            
        }
    }
}