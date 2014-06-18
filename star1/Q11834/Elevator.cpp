#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    double l,c,r1,r2;
    while( cin >> l >> c >> r1 >> r2)
    {
        if( l == 0 || c == 0)
            break;

        if( (r1+r2)*(r1+r2) <= (l-r1-r2)*(l-r1-r2) + (c-r1-r2)*(c-r1-r2) && ((max(r1,r2)*2) <= min(l,c)))
            printf("S\n");
        else
            printf("N\n");
    }
}
