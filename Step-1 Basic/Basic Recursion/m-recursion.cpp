#include <bits/stdc++.h>
using namespace std;
int Fibonacci_m(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        int last = Fibonacci_m(n - 1);
        int slast = Fibonacci_m(n - 2);
        return last + slast;
    }
}
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    cout<<Fibonacci_m(n);
    return 0;
}