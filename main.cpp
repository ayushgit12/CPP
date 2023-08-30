#include <iostream>
using namespace std;

  
int main(){
    cout<<"Hello world"<<endl;
    cout<<"Next Line\n";

    int a = 9;
    cout<<a<<"\n";

    int const b = 10;
    // b=9; Error : since b is made const, so value cant change
}
