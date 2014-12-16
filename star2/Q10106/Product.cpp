#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#define MAX 300
using namespace std;
void rev( char *x );

int main()
{

    char x[MAX]={0},y[MAX]={0};

    while( scanf("%s",x) != EOF )
    {
        scanf("%s",y);

        int x_len = strlen(x);
        int y_len = strlen(y);

        int ans[1000] = {0};

        rev(x);
        rev(y);

        for( unsigned int i = 0 ; i < x_len ; i++)
        {
            for( unsigned int j = 0 ; j < y_len ; j++)
            {
                ans[i+j] += (x[i]-'0') * (y[j]-'0');
            }
        }

        for( int i = 0 ; i+1 < x_len+y_len ; i++)
        {
             while( ans[i] >= 10 )
             {
                 ans[i+1] += ans[i]/10;
                 ans[i] %= 10;
             }
        }

        bool flag=false;

        for( int i = x_len+y_len-1 ; i >=0 ; i--)
        {
            if( ans[i] != 0 || flag)
            {
                cout << ans[i];
                flag = true;
            }
        }

        if( !flag )
            cout << "0";
        cout << endl;
    }
    return 0;
}

void rev( char *x )
{
    int p,q;
    char tmp;
    q = strlen(x)-1;
    for( p = 0 ; p < q ; p++ , q--)
    {
        tmp = x[p];
        x[p] = x[q];
        x[q] = tmp;
    }

    for( q = strlen(x) ; q < MAX ; q++)
        x[q] = '0';
    x[MAX-1] = '\0';
}
