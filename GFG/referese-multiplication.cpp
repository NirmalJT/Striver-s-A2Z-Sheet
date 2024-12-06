#include <bits/stdc++.h>
using namespace std;
void ReverseM(int a)
{

    int i = 10;
    int result;
    while (i > 0)
    {
        result = i * a;
        cout << result << endl;
        i--;
      
    }
}

int main()
{
    int a;
    cout << "Enter your numver";
    cin >> a;
    ReverseM(a);
    return 0;
}