#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
using namespace std;
long int c(string s, int t)
{
    long int hour = 0;
    hour = 10 * ((int)s[0 + t] - (int)'0') + 1 * ((int)s[1 + t] - (int)'0');
    if (s[5 + t] == 'P')
    {
        if (hour != 12)
            hour += 12;
    }
    if (s[5 + t] == 'A')
    {
        if (hour == 12)
            hour -= 12;
    }
    return hour * 60;
}
long int m(string s, int t)
{
    long int minu = 0;
    minu = 10 * ((int)s[3 + t] - (int)'0') + ((int)s[4 + t] - (int)'0');
    return minu;
}
int main()
{
    long int T;
    cin >> T;
    while (T--)
    {
        string s1 = "";
        for (int i = 0; i < 7; i++)
        {
            char c;
            cin >> c;
            s1.push_back(c);
        }
        long int hr = c(s1, 0);
        long int min = m(s1, 0);
        long int time = hr + min;
        int N;
        cin >> N;
        while (N--)
        {
            string s2 = "";
            for (int i = 0; i < 14; i++)
            {
                char m;
                cin >> m;
                s2.push_back(m);
            }
            long int time1, time2, hr1, hr2, min1, min2;
            hr1 = c(s2, 0);
            min1 = m(s2, 0);
            time1 = hr1 + min1;
            hr2 = c(s2, 7);
            min2 = m(s2, 7);
            time2 = hr2 + min2;
            if ((time > time2 && time > time1) || (time < time2 && time < time1))
            {
                cout << "0";
                continue;
            }
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }
}