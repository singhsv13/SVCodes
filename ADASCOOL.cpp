#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n % 2 == 0 || m % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    // your code goes here
    return 0;
}
