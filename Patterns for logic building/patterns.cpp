#include <bits/stdc++.h>;
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int n)
{

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {

        {
            for (int j = 1; j <= i; j++)
                cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "4";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        int space, stars;

        if (i < n)
        {
            space = n - i - 1;
            stars = 2 * i + 1;
        }
        else
        {
            space = i - n;
            stars = 2 * (2 * n - 1 - i) + 1;
        }

        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        int stars;
        if (i < n)
        {
            stars = i;
        }
        else
        {
            stars = 2 * n - i;
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            num = 1;
        }
        else
        {
            num = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num = 1 - num;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = i + 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    int print = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << print++ << " ";
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern15(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (char ch = 'A'; ch < 'A' + n - i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern16(int n)
{
    char print = 'A';
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i + 1; ch++)
        {
            cout << print << " ";
        }

        cout << endl;
        print++;
    }
}
void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char print = 'A';
        int breakPoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << print << " ";
            if (j <= breakPoint)
            {
                print++;
            }
            else
            {

                print--;
            }
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (char print = 'E' - i; print <= 'E'; print++)
        {
            cout << print << " ";
        }
        cout << endl;
    }
}
void pattern19(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }

    space = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        space -= 2;
        cout << endl;
    }
}
void pattern20(int n)
{
    int space = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        if (i < n)
        {
            space -= 2;
        }
        else
        {
            space += 2;
        }
        cout << endl;
    }
}
void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << n - min(min(top, down), min(left, right));
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the value of n you want" << endl;
    cin >> n;
    pattern22(n);
    return 0;
}
