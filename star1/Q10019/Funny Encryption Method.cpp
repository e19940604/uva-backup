#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int two10( int m );
int two16( int m );

int main()
{
    int n;
    cin >> n;
    while( n-- )
    {
        int m,b1,b2;
        cin >> m;
        b1 = two10(m);
        b2 = two16(m);
        cout << b1 << " " << b2 <<endl;
    }
}

int two10( int m )
{
    int counter=0;
    while( m != 1 )
    {
        if(m%2 != 0)
            counter++;
        m/=2;
    }
    counter++;
    return counter;
}

int two16( int m )
{
    int counter=0;

    while( m )
    {
        int tmp;
        tmp = m%10;

        while( tmp != 1)
        {
            if( tmp%2 != 0)
                counter++;

            tmp /= 2;
        }
        counter++;
        m/=10;
    }
    return counter;
}
