#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<cstring>
#define PI  4*atan(1)
using namespace std;

int main()
{
    double five;

    while( cin >> five)
    {
        double r;
        r = five * sin(108*PI/180) / sin(63*PI/180);
        printf("%.10f\n",r);

    }
}
