#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<cstring>
#define PI  3.141592653589793
using namespace std;

int main()
{
    long long int a,b,c;
    while( cin >> a >> b >> c )
    {
        if( a == 0 || b == 0 || c == 0)
            break;
        if( (a*a + b*b) == c*c  ||  (a*a + c*c) == b*b || ( b*b + c*c) == a*a )
            printf("right\n");
        else
            printf("wrong\n");

    }
}
