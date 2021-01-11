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
        ll n, x, p, k;
        cin >> n >> x >> p >> k;
        ll a[n];
        ll cn = 0; //no of x present
        fo(i, 0, n)
        {
            cin >> a[i];
            if (a[i] == x)
                cn++;
        }
        sort(a, a + n);
        k--;
        p--;
        if (a[p] == x)
            cout << 0;
        else
        {
            ll ans = -1;
            //    if(k==p){
            if (p > k)
            {
                if (a[p] > x)
                {
                    ans = 1;
                    cout << -1;
                }
            }
            else if (k > p)
            {
                if (a[p] < x)
                {
                    cout << -1;
                    ans = 1;
                }
            }
            if (ans == -1)
            {
                if (a[p] > x)
                {
                    ll c = 1;
                    while (p > 0)
                    {
                        if (a[p - 1] < x && x < a[p])
                            break;
                        p--;
                        if (a[p] == x)
                            break;
                        c++;
                    }
                    if (x < a[0])
                        cout << c;
                    else
                        cout << c;
                }
                else
                {

                    ll c = 1;
                    while (p < n - 1)
                    {
                        if (a[p + 1] > x && x > a[p])
                            break;
                        p++;
                        if (a[p] == x)
                            break;
                        c++;
                    }
                    if (x > a[n - 1])
                        cout << c;
                    else
                        cout << c;
                }
            }
            //  }
            /*  else if(k<p){
                        if(a[p]>x)
                        cout<<-1
                        else{
                            
                        }
            }
            else if(k>p){
                
            }
            */
        }
        cout << '\n';
    }
    return 0;
}
