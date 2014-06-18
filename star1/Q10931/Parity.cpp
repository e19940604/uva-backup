#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int parity( int *two , int n);


int main()
{
    int n;
    while( cin >> n && n != 0)
    {
        int i;
        int two[32];
        int num;
        for( i = 0 ; i < 32 ; i++)
            two[i] = 0;

        num = parity(two,n);
        for( i = 0 ; two[i] != 1 ; i++);

        cout << "The parity of ";
        for( ; i < 32 ; i++ )
            printf("%d",two[i]);
        cout << " is " << num << " (mod 2)." << endl;
    }
}

int parity( int *two , int n)
{
    int counter=0;
    int i;
    for( i = 31 ; i>=0 && n != 1 ; i--)
    {
        if( n % 2 != 0 )
        {
            two[i] = 1;
            counter++;
        }

        n/=2;
    }
    two[i] = 1;
    counter++;
    return counter;
}
