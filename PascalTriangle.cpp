#include <iostream>
using namespace std;

int main()
{

    int r;
    cout << "Row no??";
    cin >> r;
    int ans = 1;

    // cout<<ans<<"\n" ;
    for (int j = 1; j <= r; j++)
    {
        cout << ans << " ";
        for (int i = 1; i < j; i++)
        {
            ans *= (r - i);
            ans /= i;
            cout << ans << " ";
        }
        ans = 1;
        cout << "\n";
    }
}
