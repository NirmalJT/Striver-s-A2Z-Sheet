#include <bits/stdc++.h>
using namespace std;

void evenlyDivide(int n)
{
    int count = 0;
    int originalNum = n;
    while (n > 0)
    {
        int lastDigit = n % 10;

        cout << lastDigit << endl;
        if (lastDigit != 0 && originalNum % lastDigit == 0)
        {
            count += 1;
        }
        n = n / 10;
    }
    cout << count;
}

int main()
{
    int n = 2446;
    evenlyDivide(n);
    return 0;
}