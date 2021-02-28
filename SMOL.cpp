#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
typedef long long int ll;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--)
    {
        long long int n, k, minm = 999999;
        cin >> n >> k;
      if(k>n || k==0)
      {
          cout<<n<<endl;
          continue;
      }
      else
      {
           long long int x=n/k;
      k=k*x;
      cout<<(n-k)<<endl;
      }
    }
    return 0;
}