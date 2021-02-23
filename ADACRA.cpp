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
        string s;
        cin >> s;
        int c = 0, c1 = 0;
        if (s[0] == 'D')
        {
            c++;
        }
        else
            c1++;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == 'D')
            {
                if (s[i - 1] == 'D')
                    continue;
                else
                    c++;
            }
            if (s[i] == 'U')
            {
                if (s[i - 1] == 'U')
                    continue;
                else
                    c1++;
            }
        }
        cout << min(c, c1) << endl;
    }
    return 0;
}