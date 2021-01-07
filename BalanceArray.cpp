class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
        int sumr = 0, suml = 0;
        for (int i = 0; i < (n / 2); i++)
        {
            suml += *(a + i);
            sumr += *(a + i + (n / 2));
        }
        if (sumr > suml)
            return sumr - suml;
        else if (suml > sumr)
            return suml - sumr;
        else
            return 0;
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
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        Solution ob;
        cout << ob.minValueToBalance(a, n) << endl;
    }
    return 0;
}