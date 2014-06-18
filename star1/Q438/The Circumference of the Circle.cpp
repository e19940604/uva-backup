#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<cstring>
#define PI  3.141592653589793
using namespace std;

int main()
{
    double x1 , x2 , y1 , y2 , z1 , z2;

    while( cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2 )
    {
        double a, b ,c , p , s , r;
        a = sqrt( (x1-y1)*(x1-y1) + (x2-y2)*(x2-y2) );
        b = sqrt( (y1-z1)*(y1-z1) + (y2-z2)*(y2-z2) );
        c = sqrt( (z1-x1)*(z1-x1) + (z2-x2)*(z2-x2) );
        p = (a + b + c )/ 2;
        s = sqrt( p * ( p-a ) * ( p-b ) * ( p-c ) );
        r = a*b*c/4/s;
        printf("%.2lf\n",2*r*PI);
    }
}
