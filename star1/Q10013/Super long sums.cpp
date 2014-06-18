#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int n;

    cin >> n;
    while( n-- )
    {
        int t;
        cin >> t;
        int tmp = t;

        int *n1;
        int *n2;
        n1 = new int[t+1];
        n2 = new int[t+1];
        n1[0] = 0;
        n2[0] = 0;
        for( int i = 1 ; i <= t ; i++)
        {
            cin >> n1[i] >> n2[i];
            n1[i] += n2[i];
            while( n1[i] >= 10)
            {
                n1[i-1] += n1[i]/10;
                n1[i] %= 10;
            }
        }

        for( int i = 1 ; i <= t ; i++)
        {
            while( n1[i] >= 10)
            {
                n1[i-1] += n1[i]/10;
                n1[i] %= 10;
                for( int j = i-1 ; j >= 0 ; j--)
                {
                    if( n1[j] >= 10 )
                    {
                        n1[j-1] += n1[j]/10;
                        n1[j] %= 10;
                    }
                    else
                        break;
                }
            }
        }

        int flag = 0;
        for( int i = 0 ; i <= t; i++)
        {
            if( flag != 0 || n1[i] != 0)
            {
                cout << n1[i];
                flag = 1;
            }
        }

        if( flag == 0)
            cout << "0";

        cout << endl;
        delete n1;
        delete n2;

        if( n >= 1 )
            cout << endl ;
    }
}
