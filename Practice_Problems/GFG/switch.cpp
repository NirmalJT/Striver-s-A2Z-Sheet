#include <bits/stdc++.h>
using namespace std;

int main()
{

    int choice;
    cout << "Enter your choice" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {

        int r;
        cout << "Your choice is 1 so we will calculate Area of a circle" << endl;
        cout << "Enter the radius" << endl;
        cin >> r;
        double result = r * r * M_PI;
        cout << "The area of the circle is" << result << endl;
        break;
    }
    case 2:
    {
        int length, breath;
        cout << "your choice is 2 so we will calculate Area of a rectangle" << endl;
        cout << "Enter the length and breath";
        cin >> length >> breath;
        int result = length * breath;
        cout << "The area of the rectangle is " << result << endl;
        break;
    }

    default:
        cout << "Invalid choice. Please enter 1 or 2." << endl;
        break;
    }
    return 0;
}