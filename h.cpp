

#include <iostream>
using namespace std;

int main()
{
    int T, N, r, s = 0;
    int pr = 0, p = 0, ne = 0, no = 0, d = 0;
    int n = 1;
    // cin>>T;
    int c = 0;

    // for(int i=0; i<T; i++){
    cin >> N;
    while (1 < 2)
    {
        if (c > N)
            break;
        int m = n;
        while (m > 0)
        {
            r = m % 10;
            m /= 10;
            s = s * 10 + r;
            d++;
        }
        cout<<"\n"<<d<<"\n";
        if (s == n)
            p = -1;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
                pr++;
            if (n % (n / i) == 0 && i != n / i)
                pr++;
        }
        if (pr <= 2)
            pr = -1;
        if (p == -1 && pr == -1)
        {
            c++;
            if (d % 2 == 0)
                ne++;
            else
                no++;
        }

        n++;
    }
    cout << ne << " " << no << endl;
    c = 0;
    ne = 0;
    no = 0;
    pr = 0;
    p = 0;
    s = 0;
    d = 0;

    // }

    return 0;
}
