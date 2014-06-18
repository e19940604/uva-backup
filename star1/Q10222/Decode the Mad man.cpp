#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;


int main()
{

    char code[50] = " 1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./\0";
    char in;
    int j = 0;
    char ans[2000];

    while(scanf("%c",&in) != EOF)
    {

        if(in == '\n')
        {
            ans[j] = '\0';
            puts(ans);
            j = 0;
            memset(ans,0,2000);
        }
        else
        {
            for( int i = 0 ; i < 50 ; i++)
            {
                if( code[i] == in )
                {
                    if( in == ' ')
                        ans[j++] = ' ';
                    else
                        ans[j++] = code[i-2];
                }
            }
        }

    }
    return 0;
}
