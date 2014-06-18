#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;
long long int gcd( long long int a , long long int b);

int main()
{
    int n ;
    cin >> n;
    cin.get();

    while( n-- )
    {
        char str[10000];
        long long int counter = 0,i,j;
        long long int num[120];
        long long int ans = 0;
        char *tmp;

        for( i = 0 ; i < 120 ; i++)
            num[i] = 0;

        gets(str);

        tmp = strtok(str , " ");
        for( i = 0 ; tmp != NULL ; i++)
        {
            counter++;
            sscanf(tmp , "%lld",&num[i]);
            tmp = strtok( NULL , " ");
        }

        for( i = 0 ; i < counter ; i++)
        {
            for( j = i+1 ; j < counter ; j++ )
            {
                if(gcd(num[i],num[j]) > ans )
                    ans = gcd(num[i],num[j]);
            }
        }

        cout << ans << endl;

    }

    return 0;
}

long long int gcd( long long int a , long long int b)
{
    while( (a%=b) && (b%=a));
    return a+b;
}
