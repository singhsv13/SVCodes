#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <iomanip>
using namespace std;
float round1(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
int compareFloatNum(float a, float b)
{

    if (abs(a - b) < 1e-9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        float k1, k2, k3, s;
        cin >> k1 >> k2 >> k3 >> s;
        float A = k1 * k2 * k3 * s;
        float T = 100 / A;
        float x = round1(T);
        if (compareFloatNum(x, 9.58) == 1)
        {
            cout << "NO" << endl;
        }

        else
        {
            if (x < 9.58)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
