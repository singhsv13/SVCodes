//Euclid Algorithm for GCD
//Approach== Diff krne se gcd change nhi hota (better way = modulo is faster to find gcd)
#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b);
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << GCD(a, b) << endl;
    return 0;
}
int GCD(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}