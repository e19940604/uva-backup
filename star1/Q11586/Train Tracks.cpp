#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define pi 4*atan(1)
using namespace std;

int main()
{
    int a;
    cin >> a;
    cin.get();
    while( a-- )
    {
        char c;
        int m = 0,f = 0;
        while( scanf("%c" , &c) )
        {
            if( c == 'M')
                m++;
            if( c == 'F')
                f++;
            if( c == '\n')
                break;
        }

        if( ( m == 0 && f == 0 ) || ( m == 1 && f == 1) )
            cout << "NO LOOP" << endl;
        else if( m == f )
            cout << "LOOP" << endl;
        else
            cout << "NO LOOP" << endl;
    }
}


