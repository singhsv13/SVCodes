#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n1, n2;
    cin >> n1;
    cin >> n2;
    int n = n1 ^ n2;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int c = 0;
    while (n != 0)
    {
        n = n & (n - 1); //Trick====makes least significant set bit 0
        c++;
    }
    cout << "Bits Required to Change = " << c << endl;
    return 0;
}