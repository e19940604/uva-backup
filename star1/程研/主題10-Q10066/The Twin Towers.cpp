#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    int n1,n2;
    int counter = 0;
    while ( cin >> n1 >> n2 && (n1 || n2))
    {
        counter++;
        int t1[n1+1],t2[n2+1];
        char gar;

        memset(t1,0,sizeof(t1));
        memset(t2,0,sizeof(t2));

        for( int i = 1 ; i < n1+1 ; i++)
            cin >> t1[i];

        for( int i = 1 ; i < n2+1 ; i++)
            cin >> t2[i];

        int lcs[n1+1][n2+1];
        memset(lcs,0,sizeof(lcs));

        for( int i = 1 ; i <= n1 ; i++)
        {
            for(int j = 1 ; j <= n2 ; j++)
            {
                if( t1[i] == t2[j] )
                    lcs[i][j] = lcs[i-1][j-1] +1 ;
                else
                    lcs[i][j] = max(lcs[i-1][j] , lcs[i][j-1]);
            }
        }

        printf("Twin Towers #%d\n",counter);
        printf("Number of Tiles : %d\n\n",lcs[n1][n2]);

    }


}
