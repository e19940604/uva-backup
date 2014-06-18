#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

char lake[102][102];
void dfs( int x , int y);
int counter;

int main()
{

    int m,i,j;
    char gg;

    scanf("%d",&m);
    scanf("%c",&gg);
    scanf("%c",&gg);
    while( m-- )
    {
        for( i = 0 ; i < 102 ; i++)
            for( j = 0 ; j < 102 ; j++)
                lake[i][j] = 'L';

        int x,y;
        scanf("%d %d%c",&x,&y,&gg);
        bool flag = true;
        for( i = 1 ; i < 102 ; i++)
        {
            for( j = 1 ; j < 102 ; j++)
            {
                if(scanf("%c",&gg) == EOF)
                {
                    flag = false;
                    break;
                }
                else if(gg == '\n')
                    break;
                else
                {
                    if( gg == '0')
                        lake[i][j] = 'W';
                    else
                        lake[i][j] = 'L';
                }
            }

            if( flag == false)
            {
                break;
                cout << "XD";
            }


            gg = cin.peek();

            if( gg == '\n')
                break;

        }

        /*for( i = 1 ; i < 102 ; i++)
        {
            for( j = 1 ; j < 102 ; j++)
            {
                cout << lake[i][j];
            }
            cout << endl;
        }*/
        counter = 0;
        dfs( x, y);
        cout << counter << endl;
        if( m != 0)
            cout << endl;

    }

    return 0;
}

void dfs( int x  , int y)
{
    if( lake[x][y] == 'W')
    {
        lake[x][y] = 'x';
        counter++;
        dfs(x+1,y);
        dfs(x,y+1);
        dfs(x-1,y);
        dfs(x,y-1);
    }
    else
        return;
}
