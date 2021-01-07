#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[(i + n - d) % n];
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}