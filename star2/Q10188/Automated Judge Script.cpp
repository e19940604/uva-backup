#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;
bool compare_pre( char *ans ,  char *output);

int main()
{
    int n;
    int times=0;
    char gg;
    while( scanf("%d%c",&n ,&gg) && n != 0)
    {
        times++;
        int ans_digit = 0;
        int output_digit = 0;
        int i;
        char *ans;
        int counter = 0;
        ans = new char[ n*120 ];
        for( i = 0 ; i < n*120 && counter < n ; i++)
        {
            scanf("%c",&ans[i]);
            if( isdigit(ans[i]))
                ans_digit++;
            if( ans[i] == '\n')
                counter++;

        }
        ans[i] = '\0';


        int m;
        char *output;
        counter = 0;
        scanf("%d%c",&m,&gg);
        output = new char[ m*120 ];
        for( i = 0 ; i < m*120 && counter < m ; i++)
        {
            scanf("%c",&output[i]);
            if( isdigit(output[i]) )
                output_digit++;
            if( output[i] == '\n')
                counter++;
        }
        output[i] = '\0';

        if( !strcmp( ans , output) )
        {
            printf("Run #%d: Accepted\n",times);
            continue;
        }
        else if( ans_digit == output_digit && compare_pre( ans , output) )
        {
            printf("Run #%d: Presentation Error\n",times);
            continue;
        }
        else
        {
            printf("Run #%d: Wrong Answer\n",times);
            continue;
        }
    }
    return 0;
}

bool compare_pre( char *ans ,  char *output)
{
    bool flag=true;
    unsigned int i,j;
    int fin = 0;
    for( i = 0 ; i < strlen(output) ; i++)
    {

        if( isdigit(output[i]) )
        {
            for( j = fin ; j < strlen(ans) ; j++)
            {
                if( output[i] == ans[j] )
                {
                    flag = true;
                    fin = j;
                    break;
                }
                else
                    flag = false;
            }
        }
        if(!flag)
                break;
    }

    return flag;
}
