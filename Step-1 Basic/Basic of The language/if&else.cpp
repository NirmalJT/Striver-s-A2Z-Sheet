#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int x;
//     cout << "Enter the age :";
//     cin >> x;
//     if (x <= 0)
//     {
//         cout << "You are joking right how can you using laptop if your age is 0";
//     }
//     else if (x < 18)
//     {
//         cout << "You are a teanager";
//     }
//     else
//     {
//         cout << "You are Adult now ";
//     }
//     return 0;
// }

// int main()
// {
//     int marks;
//     cout << "Enter your marks : " << endl;
//     cin >> marks;
//     if (marks <= 25)
//     {
//         cout << "Your Grade is F";
//     }
//     else if (marks <= 44)
//     {
//         cout << "Your Grade is E";
//     }
//     else if (marks <= 49)
//     {
//         cout << "Your Grade is D";
//     }
//     else if (marks <= 59)
//     {
//         cout << "Your Grade is C";
//     }
//     else if (marks <= 79)
//     {
//         cout << "Your Grade is B";
//     }
//     else if (marks <= 100)
//     {
//         cout << "Your Grade is A";
//     }

//     return 0;
// }
int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;
    if (age < 18)
    {
        cout << "You are not eligible for job";
    }

    else if (age <= 57)
    {
        cout << "Eligible for the job but,\n";
        if (age >= 55)
        {
            cout << "Retirement soon";
        }
    }
    else if (age > 57)
    {
        cout << "Retirement time";
    }
    return 0;
}