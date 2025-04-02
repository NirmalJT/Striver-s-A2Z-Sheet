#include <bits/stdc++.h>
using namespace std;

// Digits concept
//  extraction of digits
void digits(int n)
{
    while (n > 0)
    {
        int lastVal = n % 10;
        cout << lastVal << endl;
        n = n / 10;
    }
}
void countDigits(int n)
{
    // it takes time complexity of o(log10(n))
    int count = 0;
    int orgNum = n;
    while (n > 0)
    {
        // n % 10;
        count += 1;
        n = n / 10;
    }
    cout << "The number of digits in " << orgNum << " is " << count;
}

void countDigitsEasyWay(int n)
{
    int count = (int)log10(n) + 1;
    cout << count;
}
void reverseNumber(int n)
{
    int revNum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n = n / 10;
    }
    cout << revNum;
}

void checkPalindrom(int n)
{
    int revNum = 0;
    int orgNum = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }

    if (revNum == orgNum)
    {
        cout << "Given number is  palindrom";
    }
    else
    {
        cout << "Given number is not a palindrom";
    }
}

void checkArmstrongNum(int n)
{
    int sumOfCube = 0;
    int orgNum = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sumOfCube += lastDigit * lastDigit * lastDigit;
        n = n / 10;
    }
    if (orgNum == sumOfCube)
    {
        cout << "Your given number is an armstrong number";
    }
    else
    {
        cout << "Your given number is not an armstrong number";
    }
}

void printAllDivisions(int n)
{
    // since it is running from 1 to N so the time complexity of it is 0(N)

    cout << "All divisions of " << n << " is " << endl;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << ",";
        }
    }
}

void printAllDivisions_Method2(int n)
// Optimized way to print all divisions
// Instead of looping from 1 to n, it only loops up to sqrt(n), making it O(√n) time complexity instead of O(n).

// If i is a divisor, then n / i is also a divisor.
// ✅ Efficient approach: Runs in O(√n){if we dont use vector} time, much better than O(n).
// using vector ✅ Runs in O(√n log(√n)) time due to sorting (but still much better than O(n)).
{
    vector<int> vc;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            vc.push_back(i);
            if (n / i != i)
            {
                vc.push_back(n / i);
            }
        }
    }
    sort(vc.begin(), vc.end());
    for (auto it : vc)
    {
        cout << it << " ";
    }
}

void checkPrimeM_1(int n)
{
    // normal method with Time Complexity O(n)
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Your given number is a prime number";
    }
    else
    {
        cout << "Your given number is not a prime number";
    }
}

void checkPrimeM_2(int n)
{
    // efficient way with time complexity O(squareRoot(n))
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        cout << "Your given number is a prime number";
    }
    else
    {
        cout << "Your given number is not a prime number";
    }
}

void GCD_HCF(int n1, int n2)

{
    // Time complexity will be O(min(n1,n2))
    // one way
    int GCD = 1;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            GCD = i;
        }
    }
    cout << "The GCD of the given numbers are " << GCD << endl;
}

void GCD_HCF_M2(int n1, int n2)
{
    // worst time complexity is O(min(n1,n2))
    int GCD = 1;
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            GCD = i;
        }
        break;
    }
    cout << "The GCD&HCF of given numbers are  " << GCD << " ";
}
void euclideanAlgo(int a, int b)
{
    // This is the best way in terms of time complexity to find the GCD
    // Time complexity is O(log(min(a, b)))
    // gcd(a,b)=gcd(a-b,b) if a>b;
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        cout << "GCD is" << b;
    }
    else
    {
        cout << "GCD is " << a;
    }
}
int main()
{
    // int n = 11;
    // digits(n);
    // countDigits(n);
    // countDigitsEasyWay(n);
    // reverseNumber(n);
    // checkPalindrom(n);
    // checkArmstrongNum(n);
    // printAllDivisions(n);
    // printAllDivisions_Method2(n);
    // checkPrimeM_1(n);
    // checkPrimeM_2(n);
    // int n1 = 52;
    // int n2 = 10;
    // GCD_HCF(n1, n2);
    // GCD_HCF_M2(n1, n2);
    int a = 52;
    int b = 10;
    euclideanAlgo(a, b);
    return 0;
}