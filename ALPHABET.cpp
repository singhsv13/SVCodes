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
    string s, st;
    getline(cin, s);
    int n;
    cin >> n;
    cin.ignore();
    int c[27] = {0};
    sort(s.begin(), s.end());
    int flag = 0;
    for (int i = 0; i < s.length(); i++)
        c[(int)s[i] - 97]++;
    while (n--)
    {
        getline(cin, st);
        c[27] = {0};
        flag = 0;
        sort(st.begin(), st.end());
        // for (int k = 0; k < 27; k++)
        //     cout << c[k] << " ";
        for (int i = 0; i < st.length(); i++)
        {
            if (c[(int)st[i] - 97] == 1)
                flag = 1;
            else
                flag = 0;
        }
        if (flag == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}