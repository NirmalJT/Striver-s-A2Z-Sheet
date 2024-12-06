#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[3] = {5, 5, 10};
    int choice;
    cout << "Enter your choice" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int r = arr[0];
        cout << "Your choice is 1 so we will calculate Area of a circle" << endl;
        double result = r * r * M_PI;
        cout << "The area of the circle is" << result << endl;
        break;
    }
    case 2:
    {
        int length = arr[1], breath = arr[2];
        cout << "your choice is 2 so we will calculate Area of a rectangle" << endl;
        int result = length * breath;
        cout << "The area of the rectangle is " << result << endl;
        break;
    }
    }
    return 0;
}