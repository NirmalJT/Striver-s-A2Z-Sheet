#include <bits\stdc++.h>;
using namespace std;

void print1(int n)
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
void print2(int n)
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

void print3(int n)
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

void print4(int n)
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

void print5(int n)
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

void print6(int n)
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

void print7(int n)
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

void print8(int n)
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

void print9(int n)
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

void print10(int n)
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

void print11(int n)
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
            num=1-num;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of * you want" << endl;
    cin >> n;
    print11(n);
    return 0;
}
