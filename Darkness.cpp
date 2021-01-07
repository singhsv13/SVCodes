#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxDays(int arr[], int n)
    {
        int *maxele;
        maxele = max_element(arr, arr + n);
        return *maxele;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.maxDays(arr, n) << "\n";
    }
    return 0;
}