#include<iostream>
using namespace std;

int partitionString(string s) {
    vector<string> v;
    string g="";
    int c=0;
    int j;
    for(int i=0; i<s.length(); i++){
        g=s[i];
        for( j=i+1; j<s.length(); j++){
            if(s[j]==s[i])
                break;
            g+=s[j];
        }
        i=j-1;
        v.emplace_back(g);
        c++;
    }
    return c;
}
int main(){
    cout<<partitionString("abacaba");

}