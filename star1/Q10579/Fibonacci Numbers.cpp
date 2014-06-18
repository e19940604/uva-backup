#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
void fi(int n);

int ans[1000];

int main()
{
    int n;

    while( cin >> n)
    {
        int flag = 0;
        for( int i = 0 ; i < 1000 ; i++)
            ans[i] = 0;
        ans[0] = 1;

        fi( n);

        /*for( int i = 0 ; i+1 < 1000 ; i++)
        {
            while( ans[i] >= 10)
            {
                ans[i+1] += ans[i]/10;
                ans[i] %= 10;
            }
        }*/

        for( int i = 999 ; i >= 0 ; i--)
        {
            if( flag != 0 || ans[i] !=0)
            {
                printf("%d",ans[i]);
                flag = 1;
            }
        }
        cout << "\n";
    }
}

void fi( int n )
{
    int last[1000],tmp[1000];

    for( int i = 0 ; i < 1000 ; i++)
    {
        last[i] = 0;
        tmp[i] = 0;
    }

    for( int j = 1 ; j <= n-2 ; j++)
    {
        if( j == 1 )
                last[0] = 1;
        for( int i = 0 ; i < 1000 ; i++)
        {
            tmp[i] = ans[i];
            ans[i] += last[i];
            last[i] = tmp[i];
        }

        for( int i = 0 ; i+1 < 1000 ; i++)
        {
            if( ans[i] >= 10 )
            {
                 ans[i+1] += ans[i]/10;
                 ans[i] %= 10;
            }

            if( last[i] >= 10)
            {
                last[i+1] += last[i]/10;
                last[i] %= 10;
            }
        }
    }
}
