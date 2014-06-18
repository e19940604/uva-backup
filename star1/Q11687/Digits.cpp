#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int digit_len( int );

int main()
{
    string digit;

    while( getline( cin , digit) && digit != "END" )
    {
        int last = 0;
        int now;
        int counter;
        if( digit != "1")
            counter = 1;
        else
            counter = 0;

        now = digit.length();
        while( now != last )
        {
            counter++;
            last = now;
            now = digit_len( now );
        }
        cout << counter << endl;
    }
}

int digit_len( int now )
{
    int c=0;
    while( now )
    {
        c++;
        now/=10;
    }
    return c;
}
