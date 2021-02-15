#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int i, f = 0, a;
        for (i = 0; i < 5; i++)
        {
            cin >> a;
            f += a;
        }
        if (f == 0)
            printf("Beginner\n");
        if (f == 1)
            printf("Junior Developer\n");
        if (f == 2)
            printf("Middle Developer\n");
        if (f == 3)
            printf("Senior Developer\n");
        if (f == 4)
            printf("Hacker\n");
        if (f == 5)
            printf("Jeff Dean\n");
    }
}
