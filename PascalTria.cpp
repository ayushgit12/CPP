#include <iostream>
using namespace std;


int main()
{

    int r;
    cout << "Row no??";
    cin >> r;
    int ans = 1;

    cout<<ans<<" " ;
    for(int i=1; i<r; i++){
        ans*=(r-i);
        ans/=i;
        cout<<ans<<" ";
        
    }
    cout<<"\n";
}
