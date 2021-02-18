#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
typedef long long int ll;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int flag = 1;
        if (s1.length() != s2.length())
            cout << "No\n";
        else
        {
            for (int i = 0; i < s1.length(); i++)
            {
                if (s1[i] == s2[i] || s1[i] == '?' || s2[i] == '?')
                    flag = 1;
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}