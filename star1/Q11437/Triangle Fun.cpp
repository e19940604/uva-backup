#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<cstring>
#define PI  3.141592653589793
using namespace std;

int main()
{
    int n;
    cin >> n;
    while( n-- )
    {
        double ans;
        double a1,a2,b1,b2,c1,c2;
        cin >> a1>>a2>>b1>>b2>>c1>>c2;

        ans = (a1*b2-a2*b1+b1*c2-b2*c1+c1*a2-a1*c2) /2;
        if( ans < 0)
            ans*=-1;
        printf( "%.0f\n",ans/7);

    }
}
