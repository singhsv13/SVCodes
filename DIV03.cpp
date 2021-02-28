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
        long long int A[11];
        A[0]=-1;
        for(int i=1;i<11;i++)
        {
            cin>>A[i];
        }
        long long int k;
        cin>>k;
       int i=10;
       while(k>0)
        {
            k=k-A[i];
            i--;
        }
        if(k<0)
        {
             cout<<i+1<<endl;
             continue;
        }
        else if(k==0)
        {
           if(A[i]==0)
        {
           while(A[i]==0)
        {
            i--;
        }
        cout<<i<<endl;
        continue;
        }
        if(A[i]!=0)
        {
            cout<<i<<endl;
             continue;
        }
        }
    }
    return 0;
}