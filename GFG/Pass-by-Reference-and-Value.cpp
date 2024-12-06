#include <bits/stdc++.h>
using namespace std;
void PrPv(int a, int &b)
{
        a = a + 1;
        b = b + 2;
        cout << a << endl
            << b<<endl;
        return;
};

int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    PrPv(a, b);
    cout << a << endl
         << b;
    return 0;
}