#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int A[] = {1,4,5,8,9};
    bool res = binary_search(begin(A),end(A),4);
    cout<<res;
    return 0;
}