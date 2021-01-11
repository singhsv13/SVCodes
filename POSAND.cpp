#include <bits/stdc++.h>
using namespace std;
using ld = long double;
using ll = long long;
const ll mod = 1000000007;
#define fo(i, a, b) for (ll i = a; i < b; i++)
#define T     \
    ll t;     \
    cin >> t; \
    fo(i, 0, t)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    T
    {
        ll n;
        cin >> n;   //cout<<"D"<<n<<'\n';
        if (n == 1) //powqp
            cout << 1;
        else if (n == 2)
            cout << -1;
        else if (n == 3)
        {
            cout << 2 << " " << 3 << " " << 1;
        }
        else
        { //cout<<"YEs";
            ll c = 1;
            ll num = n;
            while (1)
            {   //if 2 pow
                // n=n/2;
                if (n % 2 == 1 && n != 1)
                {
                    c = -1;
                    break;
                }
                if (n == 1)
                    break;
                n = n / 2;
            }
            //     cout<<"Cc"<<c<<'\n';
            if (c == 1)
                cout << -1;
            else
            {
                ll tt = 4;
                cout << 2 << " " << 3 << " " << 1 << " ";
                ll q = 4;
                while (q <= num)
                {
                    if (tt == q)
                    {
                        cout << q + 1 << " " << q << " ";
                        q += 2;
                        tt *= 2;
                    }
                    else
                    {
                        cout << q << " ";
                        q++;
                    }
                }
            }
        }
        cout << '\n';
    }
    return 0;
}