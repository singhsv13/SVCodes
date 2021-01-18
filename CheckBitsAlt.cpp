//check bits of no. are alternate or not eg. = 101010101
#include <bits/stdc++.h>
using namespace std;
bool allBitsareSet(int num);
bool CheckBitsRAlt(int n);
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (CheckBitsRAlt(n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
bool CheckBitsRAlt(int n)
{
    int num = n & (n >> 1);
    return allBitsareSet(num);
}
bool allBitsareSet(int num)
{
    if ((num & (num + 1)) == 0)
        return true;
    else
        return false;
}