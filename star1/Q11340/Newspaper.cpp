#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;


int main()
{
    int n;
    unsigned char gg;
    scanf("%d%c" , &n , &gg);
    while( n-- )
    {
        int k;
        int money[256];
        unsigned char word;
        int dollors;
        int line;
        int counter = 0;
        double value = 0;
        scanf("%d%c",&k , &gg);

        for( int i = 0 ; i < 256 ; i++)
            money[i] = 0;
        while( k-- )
        {
            scanf("%c %d%c",&word , &dollors , &gg);
            money[word] = dollors;
        }

        scanf("%d%c", &line , &gg);
        while( counter != line )
        {
            scanf("%c",&gg);
            value += money[gg];
            if( gg == '\n')
                counter++;
        }

        printf("%.2lf$\n",value/100.0);
    }
    return 0;
}
