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
    while (t--)
    {
        int s, w1, w2, w3, n;
        double sum;
        cin >> s >> w1 >> w2 >> w3;
        if (s >= (w1 + w2 + w3))
            printf("1\n");
        else if (s >= (w1 + w2) || s >= (w2 + w3))
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}