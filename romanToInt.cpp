#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Input??";
    cin >> s;
    int g = 0;
    for (int i = 0; i < s.size(); i++)
    {
        // cout<<g<<endl;
        char ch = s[i];

        if (ch == 'M')
        {
            g += 1000;
            // cout<<g<<endl;
        }
        if (ch == 'D')
        {
            g += 500;
            // cout<<g<<endl;
        }
        if (ch == 'C')
        {
            if (i != (s.size() - 1))
            {
                if (s[i + 1] == 'D')
                {
                    g += 400;
                    i += 1;
                }
                else if (s[i + 1] == 'M')
                {
                    g += 900;
                    i += 1;
                }
                else
                {
                    g += 100;
                }
            }
            else{
                g+=100;
            }
            // cout<<g<<endl;
        }

        if (ch == 'X')
        {
            // cout<<"ALALALA"<<endl;

            if (i != (s.size() - 1))
            {
                if (s[i + 1] == 'L')
                {
                    g += 40;
                    i += 1;
                }
                else if (s[i + 1] == 'C')
                {
                    g += 90;
                    // cout<<"sfdfghjsdsfsgdlkybiwe"<<endl;
                    i += 1;
                }
                else
                {
                    // cout<<"OLAOLAOLA"<<endl;
                    g += 10;
                }
            }
            else{
                // cout<<"HULULU"<<endl;
                g+=10;
            }
            // cout<<g<<endl;
        }

        if (ch == 'I')
        {
            if (i != (s.size() - 1))
            {
                if (s[i + 1] == 'V')
                {
                    g += 4;
                    i += 2;
                }
                else if (s[i + 1] == 'X')
                {
                    g += 9;
                    i += 1;
                }
                else
                {
                    g += 1;
                }
            }
            else{
                g+=1;
            }
            // cout<<g<<endl;
        }

        if (ch == 'L')
        {
            g += 50;
            // cout<<g<<endl;
        }

        if (ch == 'V')
        {
            g += 5;
            // cout<<g<<endl;
        }
    }

    cout << g;

    return 0;
}


