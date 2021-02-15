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
        int n;
        int num;
        cin >> n;
        vector<int> v, v1;
        v.reserve(n);
        v1.reserve(n);
        int arr[n], a[n], l[n];
        for (int i = 0; i < n; i++)
            cin >> l[i];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            arr[i] = l[i] * a[i];
        }
        num = *(max_element(arr, arr + n));
        cout << "Num= " << num << endl;
        for (int i = 0; i < n; i++)
        {
            if (num == arr[i])
            {
                v.pb(i + 1);
                v1.pb(a[i]);
            }
        }
        int c = 0;
        int pos[n] = {0}, j = 0;
        num = *max_element(v1.begin(), v1.end());
        for (int i = 0; i < n; i++)
        {
            if (num == a[i])
            {
                c++;
                pos[j] = i + 1;
                j++;
            }
        }
        int s = v.size();
        cout << "size= " << s << endl;
        if (s == 1)
            cout << v[0] << endl;
        else if (s > 1)
        {
            if (c == 1)
                cout << pos[0] << endl;
            else if (c > 1)
                cout << pos[0] << endl;
        }
    }
    return 0;
}