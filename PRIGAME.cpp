#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define N 1000001
typedef long long int ll;
bool isprime(long n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int prime[N];
    prime[0] = 0;
    prime[1] = 0;
    int count = 0;
    for (int i = 2; i < N; i++)
    {
        if (isprime(i))
            count++;
        prime[i] = count;
    }
    long t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        if (prime[n] > k)
            cout << "Divyam\n";
        else
            cout << "Chef\n";
    }
    return 0;
}