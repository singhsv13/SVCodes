#include <bits/stdc++.h>
using namespace std;
void PrimeFactorization(int n);
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    PrimeFactorization(n);
    return 0;
}
void PrimeFactorization(int n)
{
    int spf[n + 1] = {0};
    for (int i = 0; i <= n; i++)
        spf[i] = i;
    for (int i = 2; i <= n; i++)
    {
        for (int j = i * i; j <= n; j += i)
        {
            if (spf[j] == j)
                spf[j] = i;
        }
    }
    while (n != 1)
    {
        cout << spf[n] << " ";
        n /= spf[n];
    }
}