#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    double n;
    while( cin >> n)
    {
        double a,N;
        double counter = 0;
        double x,y;
        N = n;
        cin >> a;

        if( n == 0 && a == 0)
            break;

        while(n--)
        {
            cin >> x >> y;
            if( x*x+y*y <= a*a && x*x+(y-a)*(y-a) <= a*a && (x-a)*(x-a)+y*y <= a*a && (x-a)*(x-a)+(y-a)*(y-a) <= a*a)
                counter++;
        }
        printf("%.5f\n",counter/N*a*a);
    }
}
