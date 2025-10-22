#include <bits/stdc++.h>
using namespace std;
// There is is two way to sum using recursion one is perameterized way and another one is funtional

// Paramiterized way that print the sum
void Sum_Of_N(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }

    Sum_Of_N(i - 1, sum + i);
}
// Functional way that return the sum
int Sum_Of_N_2(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + Sum_Of_N_2(n - 1); // ✅ fixed (was calling wrong function)
}
// Factorial of n using recursion functional way
int factorial_Of_N(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial_Of_N(n - 1);
}
//// Factorial of n using recursion parameterized way
// void factorial_Of_N_2(int n, int Factorial)
// {
// }

int reverse_array()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int lenght = sizeof(arr) / sizeof(arr[0]);
    for (int i = lenght - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // int i = 3;
    // Sum_Of_N(i, 0);
    int n = 4;
    // cout << Sum_Of_N_2(n);
    // cout << factorial_Of_N(n);
    reverse_array();
    return 0;
}
