#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int bit( int *three , int n);


int main()
{
    int n;
    while( cin >> n && n >= 0 )
    {
        int three[32];
        int i;
        int counter;
        for( i = 0 ; i < 32 ; i++)
            three[i] = 0;

        counter = bit( three , n );

        for( i = counter ; i >=0 ; i--)
            cout << three[i];
        cout <<endl;
    }
}

int bit( int *three , int n)
{
    int counter = 0;
    int i = 0;

    while( n > 2 )
    {
        if( n %3 == 1)
            three[i++] = 1;
        else if( n %3 == 2)
            three[i++] = 2;
        else
            three[i++] = 0;
        n/=3;
        counter++;
    }

    if( n == 1)
        three[i] = 1;
    else if ( n == 2)
        three[i] = 2;
    else
        three[i] = 0;

    return counter;
}
