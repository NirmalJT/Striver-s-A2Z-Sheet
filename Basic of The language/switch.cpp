#include <bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cout << "Enter the number in between 1 to 7:\n";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Fryday";
        break;
    case 6:
        cout << "Monday";
        break;
    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Invalid input enter number between 7";
        break;
    }
}