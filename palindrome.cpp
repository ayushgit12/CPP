#include <iostream>
#include <string>
using namespace std;

void f(string a, int i, int l)
{
    if (i >= l / 2)
    {
        cout << "palindrome";
        return;
    }

    if (a[i] != a[l - i - 1])
    {
        cout << "Not" ;
        return;
    }

    f(a, i + 1, l);
}
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    f(s, 0, len);
}