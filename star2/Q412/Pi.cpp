#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define pi 4*atan(1)
using namespace std;
int gcd( int a , int b);

int main()
{
   int a;
   while( cin >> a && a != 0 )
   {
       int num[60];
       int all_pair = 0;
       int prime_pair = 0;

       for( int i = 0 ; i < 60 ; i++)
            num[i] = 0;

       for( int i = 0 ; i < a ; i++)
       {
            all_pair += i;
            cin >> num[i];
       }



       for( int i = 0 ; i < a ; i++)
       {
           for( int j = i+1 ; j < a ; j++)
           {
               if( gcd(num[i],num[j]) == 1)
                    prime_pair++;
           }
       }

       if( prime_pair != 0)
       {
           printf( "%lf\n" , sqrt(6*(double)all_pair / (double)prime_pair ));
       }
       else
            printf("No estimate for this data set.\n");

   }
}

int gcd( int a , int b)
{
    while( (a %= b) && ( b%=a ));
    return a+b;
}
