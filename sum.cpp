
#include <iostream>
using namespace std;
// PARAMETERISED WAY!
void f(int a, int b)
{
    if (a < 1)
    {
        cout << b <<endl;
        return;
    }
    
    f(a - 1, b+a);
}
int main()
{
    int n, s = 0;
    cin >> n;
    f(n, s);
}