#include <bits/stdc++.h>
using namespace std;
int getBit(int n, int pos);
int setBit(int n, int pos);
int clearBit(int n, int pos);
int updateBit(int n, int pos, int value);
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, pos, value;
    cin >> n >> pos >> value;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Getbit = " << getBit(n, pos) << endl;
    cout << "Setbit = " << setBit(n, pos) << endl;
    cout << "Clearbit = " << clearBit(n, pos) << endl;
    cout << "Updatebit = " << updateBit(n, pos, value) << endl;
    return 0;
}
int getBit(int n, int pos)
{
    if (n & (1 << pos) != 0)
        return 1;
    else
        return 0;
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int clearBit(int n, int pos)
{
    return (n & (~(1 << pos)));
}
int updateBit(int n, int pos, int value) //clear then setbit
{
    int x = clearBit(n, pos);
    return (x | (value << pos));
}