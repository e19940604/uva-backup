#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int psum( int n);

int main()
{
    int n;
    int a= 0;
    while( scanf("%d",&n) && n !=0 )
    {
        if( a == 0)
        {
            printf("PERFECTION OUTPUT\n");
            a++;
        }
        int sum = psum(n);
        printf("%5d  ",n);
        if( sum == n)
            printf("PERFECT\n");
        else if( sum < n)
            printf("DEFICIENT\n");
        else
            printf("ABUNDANT\n");
    }
    printf("END OF OUTPUT\n");
}

int psum( int n)
{
    int sum = 0;
    for( int i = 1 ; i < n ; i++)
    {
        if( n % i == 0)
            sum += i;
    }
    return sum;
}
