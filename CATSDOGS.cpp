#include <bits/stdc++.h>

using namespace std;

// x cats riding on the horses
// x <= min(cats, 2 * dogs).
// 4 * (cats + dogs - x) = legs;

int cats, dogs, legs;

int solveSubtask3()
{
    if (legs % 4 != 0)
    {
        return false;
    }
    long long x = cats + dogs;
    x -= legs / 4;
    //int x = cats + dogs - legs / 4;
    return x >= 0 && x <= min(cats, 2 * dogs);
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d %d", &cats, &dogs, &legs);
        int ok = solveSubtask3();
        puts(ok ? "yes" : "no");
    }
    return 0;
}