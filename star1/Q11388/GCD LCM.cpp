#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define pi 4*atan(1)
using namespace std;
int change( char *s , int length );
int gcd( int a, int b);

int main()
{
    int n;
    cin >> n;
    while( n--)
    {
        int g,l;
        cin >> g >> l;
        if( l%g != 0)
        {
            cout << "-1" << endl;
            continue;
        }
        else
        {
            cout << g << " " << l << endl;
        }
    }

}
