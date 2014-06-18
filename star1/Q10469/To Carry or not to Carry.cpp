#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define pi 4*atan(1)
using namespace std;
void in_ar( int *arr , int num );
int out_ar( int *ans );

int main()
{
   int a,b;
   while( cin >> a >> b)
   {
       int arr1[32];
       int arr2[32];
       int ans[32];
       for( int i = 0 ; i < 32 ; i++ )
       {
           arr1[i] = 0;
           arr2[i] = 0;
           ans[i] = 0;
       }

       in_ar( arr1 , a);
       in_ar( arr2 , b);

       for( int i = 0 ; i < 32 ; i++)
       {
            if( arr1[i] ==1 && arr2[i] == 1)
                ans[i] = 0;
            else if( arr1[i] || arr2[i] )
                ans[i] = 1;
            else
                ans[i] = 0;
       }

       cout << out_ar( ans ) << endl;
   }
}

void in_ar( int *arr , int num)
{
    int index = 31;
    while( index >= 0)
    {
        if( num % 2 == 0)
            arr[index--] = 0;
        else
            arr[index--] = 1;
        if(num == 1)
            break;
        num /= 2;
    }
}

int out_ar( int *ans)
{
    int sum = 0;

    for( int i = 31 ; i >=0  ; i--)
    {
        int tmp = 0;
        if( ans[i] )
        {
            tmp = 1;
            for( int j = 31 - i ; j > 0 ; j-- )
            {
                tmp *=2;
            }
        }
        sum += tmp;
    }
    return sum;
}
