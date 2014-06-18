#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define pi 4*atan(1)
using namespace std;

int main()
{
    double r,n;
    while( cin >> r >> n)
    {
        printf("%.3lf",n* 0.5 * r * r *sin(2* pi /n)) ;
    }
}
