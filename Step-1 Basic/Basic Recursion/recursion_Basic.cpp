#include <bits/stdc++.h>
using namespace std;
// When a funtion calls itself untill a specified condition is met is called recursion
// The specified condtion forem where the recursoin will stop is called base condition
void recursion()
{
    cout << 1; // in these case of  recursion it will after stack overflow
    recursion();
}
void baseCondition_Recursion(int count)
{
    if (count == 4)
        return;
    cout << count << " ";
    count += 1;
    baseCondition_Recursion(count);
}

void print_name_n_times(int i, int n)
{
    // time complexity and space complexity is o(n)
    if (i > n)
        return;
    cout << "Nirmal" << endl;
    print_name_n_times(i + 1, n);
}
void print_1ToN(int i, int n)
{
    // time complexity and space complexity is o(n)
    if (i > n)
        return;
    cout << i << endl;
    print_1ToN(i + 1, n);
}

void print_Nto1(int i, int n)
{
    // time complexity and space complexity is o(n)
    if (i < 1)
        return;
    cout << i << endl;
    print_Nto1(i - 1, n);
}

void print_1ToN_BackTracking(int i, int n)
{
    // This method of printing from 1 to N is called back tracking it wait untill the base condition met then start printing
    if (i < 1)
        return;
    print_1ToN_BackTracking(i - 1, n);
    cout << i << endl;
}

void print_NTo1_BackTracking(int i, int n)
{
    if (i > n)
        return;
    print_NTo1_BackTracking(i + 1, n);
    cout << i << endl;
}
int main()
{
    int i = 1;
    int n = 5;
    // recursion(); // it will print untill stack overflow
    // baseCondition_Recursion(count);
    // print_name_n_times(i, n);
    // print_1ToN(i, n);
    // print_Nto1(n, n);
    // print_1ToN_BackTracking(n, n);
    print_NTo1_BackTracking(i, n);
    return 0;
}