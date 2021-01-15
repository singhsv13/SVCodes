#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int t, n;
   cin >> t;
   while (t--)
   {
      int n, k, x, y;
      cin >> n >> k >> x >> y;
      if (x == y)
      {
         x = n;
         y = n;
      }
      if (x > y)
      {
         if (k % 4 == 1)
         {
            y = y + n - x;
            x = n;
         }
         else if (k % 4 == 2)
         {
            x = y + n - x;
            y = n;
         }
         else if (k % 4 == 3)
         {
            y = x - y;
            x = 0;
         }
         else if (k % 4 == 0)
         {
            x = x - y;
            y = 0;
         }
      }
      if (x < y)
      {
         if (k % 4 == 1)
         {
            x = (n + x) - y;
            y = n;
         }
         else if (k % 4 == 2)
         {
            y = (n + x) - y;
            x = n;
         }
         else if (k % 4 == 3)
         {
            x = y - x;
            y = 0;
         }
         else if (k % 4 == 0)
         {
            y = y - x;
            x = 0;
         }
      }
      cout << x << " " << y << endl;
   }
}