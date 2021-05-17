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
        int c = 0;
        string st = '0' + s + '0';
        for (int i = 0; i < st.length(); i++)
        {
            if (st[i] == '1')
            {
                c++;
                int j;
                for (j = i; st[j] != '0'; j++)
                    continue;
                i = j;
            }
        }
        cout << c << "\n";
    }
    return 0;
}