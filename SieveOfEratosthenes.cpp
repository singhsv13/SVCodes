/**Sieve algo gives the total no. of prime no. less than the given no.**/
#include <bits/stdc++.h>
using namespace std;
void primeSieve(int n);
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    primeSieve(n);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
}
void primeSieve(int n)
{
    int prime[n] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = 1; //marking all the non-prime no.
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
            cout << i << " "; //prints all prime no.
    }
}