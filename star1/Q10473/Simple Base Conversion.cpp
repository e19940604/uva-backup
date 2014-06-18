#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;


int main()
{
    char next_char;
    next_char = cin.peek() ;
    while(  next_char != '-' )
    {
        int hex;
        if( next_char == '0')
        {
            scanf("%X",&hex);
            printf("%d\n",hex);
        }
        else
        {
            scanf("%d",&hex);
            printf("0x%X\n",hex);
        }

        cin.get();
        next_char = cin.peek();
    }
}

