#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int k, d;
        int n;
        cin >> n >> k >> d;
        long long int a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum < k)
            cout << "0" << endl;
        else if ((sum / k) > d)
            cout << d << endl;
        else if ((sum / k) <= d)
            cout << sum / k << endl;
    }
    return 0;
}