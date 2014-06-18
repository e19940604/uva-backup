#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while( n-- )
    {
        int mon,day;
        int total = 5;
        int dat[12]={0,31,59,90,120,151,181,212,243,273,304,334};

        cin >> mon >> day;
        total += dat[mon-1] + day;

        if( total%7 == 0)
            cout << "Sunday\n";
        else if( total%7 == 1)
            cout << "Monday\n";
        else if( total%7 == 2)
            cout << "Tuesday\n";
        else if( total%7 == 3)
            cout << "Wednesday\n";
        else if( total%7 == 4)
            cout << "Thursday\n";
        else if( total%7 == 5)
            cout << "Friday\n";
        else if( total%7 == 6)
            cout << "Saturday\n";
    }
}
