#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int r;
    cin >> r;
    if (r >= 1 && r <= 50)
        cout << "100" << endl;
    else if (r > 50 && r <= 100)
        cout << "50" << endl;
    else
        cout << "0" << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
}