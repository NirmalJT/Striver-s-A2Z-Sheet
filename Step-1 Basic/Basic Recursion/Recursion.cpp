#include <bits/stdc++.h>
using namespace std;
void reverseArray(int l, int arr[], int n)
{
    if (l >= n / 2)
    {
        return;
    }
    swap(arr[l], arr[n - l - 1]);
    reverseArray(l + 1, arr, n - 1);
}
bool palindromeCheck(int n, string &s)
{
    if (n >= s.size() / 2)
        return true;
    if (s[n] != s[s.size() - n - 1])
        return false;
    palindromeCheck(n + 1, s);
}
int main()
{
    // int n;
    // cout << "Enter number of array element ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    // reverseArray(0, arr, n);
    // for (int i = 0; i < n; i++)
    //     cout << arr[i];
    string s = "madam";
    cout << palindromeCheck(0, s);
    return 0;
}