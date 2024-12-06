#include <bits/stdc++.h>
using namespace std;

void doSomething(string &s)
{
    s[0] = 'R';
    cout << s << endl;
}
int main()
{
    string s = "Nabajit";
    doSomething(s);
    cout << s << endl;
    return 0;
}

// void doSomething(int number){
//     cout<<number<<endl;
//     number+=5;
//     cout<<number<<endl;
//     number+=6;
//     cout<<number<<endl;

// }

// int main(){
//     int number=10;
//     doSomething(number);
//     cout<<number<<endl;
//     return 0;
// }