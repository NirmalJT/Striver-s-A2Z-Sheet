#include <bits/stdc++.h>
using namespace std;

// void printName(string name)
// {
//     cout << "Hello " << name << endl;
// }

// int main()
// {
//     string name;
//     cout << "Enter your name" << endl;
//     cin >> name;
//     printName(name);
//     string name2;
//     cin >> name2;
//     printName(name2);
//     return 0;
// }

// void Sum(int a, int b)
// {
//     cout << "The sum of the two numbers " << a << " and " << b << " is " << a + b << endl;
// }

// int main()
// {
//     int num1, num2;
//     cout << "Enter the numbers you want to add" << endl;
//     cin >> num1 >> num2;
//     Sum(num1, num2);
//     return 0;
// }

int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int num1, num2;
    cout << "Enter two numbers to find the greater one:" << endl;
    cin >> num1 >> num2;
    int result = maximum(num1, num2);
    cout << "The bigger number is " << result;
}