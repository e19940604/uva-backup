#include<stdio.h>
#include<iostream>
using namespace std;
long long int rec( int , int , int );

int main()
{
    long long int n;

    while( scanf("%ld",&n) && n != -1)
    {
        if( rec( 2,n-1,n) ==1)
            printf("%ld is a Jimmy-number\n",n);
        else
            printf("%ld is not a Jimmy-number\n",n);
    }
}

long long int rec( int b , int p , int m)
{
    long long int r1;
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
