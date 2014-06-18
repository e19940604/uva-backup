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
    cin.get();
    int counter = 0;
    while( n-- )
    {
        counter++;
        char s1[35];
        char s2[35];
        int s1_long = 0;
        int s2_long = 0;
        int S1;
        int S2;
        char c;
        int x = 0;

        while( scanf("%c",&c) && c!= '\n')
        {
            s1[x++] = c;
            s1_long++;
        }

        s1[x] = '\0';
        x = 0;

        while( scanf("%c",&c) && c!= '\n')
        {
            s2[x++]=c;
            s2_long++;
        }
        s2[x] = '\0';

        //cout << change( s1 , s1_long );
        S1 = change( s1 , s1_long );
        S2 = change( s2 , s2_long );

        if( gcd(S1 , S2 ) == 1)
            printf("Pair #%d: Love is not all you need!\n",counter);
        else
            printf("Pair #%d: All you need is love!\n",counter);
    }
}

int change( char *s , int length )
{
    int ans=0;
    for( int i = length ; i >= 0 ; i--)
    {
        if( s[i] == '1')
        {
            int tmp = 1;
            for( int j = 1 ; j < length - i ; j++)
                tmp *= 2;
            ans += tmp;
        }
    }
    return ans;
}

int gcd( int a , int b)
{
    while( (a%=b) && (b%=a));
    return a+b;
}
