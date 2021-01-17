#include <bits/stdc++.h>
using namespace std;
int FirstOccur(int arr[], int i, int n, int key);
int LastOccur(int arr[], int i, int n, int key);
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, key;
    cin >> n;
    int arr[n];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter no." << endl;
    cin >> key;
    cout << "First Occurrance = " << FirstOccur(arr, 0, n, key) + 1 << endl;
    cout << "Last Occurance = " << LastOccur(arr, 0, n, key) + 1 << endl;
    return 0;
}
int FirstOccur(int arr[], int i, int n, int key)
{
    int fo = 0;
    if (i == key)
        return -1;
    else
    {
        if (*(arr + i) == key)
            return i;
    }
    return FirstOccur(arr, i + 1, n, key);
}
int LastOccur(int arr[], int i, int n, int key)
{
    if (i == n)
        return -1;
    else
    {
        if (*(arr + i) == key)
            return max(i, LastOccur(arr, i + 1, n, key));
    }
    return LastOccur(arr, i + 1, n, key);
}