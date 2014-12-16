#include<stdio.h>
#include<iostream>
using namespace std;
int rec( int , int , int );

int main()
{
    int b,p,m;

    while( cin >> b >> p >> m)
    {
        int r;
        r = rec( b , p , m );

        cout << r << endl;
    }

    return 0;
}

int rec( int b , int p , int m)
{
    int r1;
    if( p == 0)
    {
        return 1;
    }
    else if( p%2 == 0)
    {
        r1 = rec( b , p/2 , m);
        return (r1*r1)%m;
    }
    else
    {
        r1 = rec( b , (p-1)/2 , m );
        return ( ( b % m) * ( (r1*r1) % m) ) % m;
    }
}
