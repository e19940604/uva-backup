#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;
void big_add( int *ini , char *add);
void str_rev( char *add);

int main()
{
    int ini[20000];
    char to_add[20000];
    for(int i = 0 ; i < 19999 ; i++)
    {
        ini[i] = 0;
        to_add[i] = '0';
    }
    ini[19999] = 0;
    to_add[19999] = '\0';

    while( scanf("%s", to_add) )
    {
        if( to_add[0] == '0' && to_add[1] == '\0')
        {
            break;
        }
        else
        {
            big_add( ini , to_add );
        }
    }

    bool flag = false;
    for( int i = 19999 ; i >= 0 ; i-- )
    {
        if( ini[i] != 0 || flag == true)
        {
            cout << ini[i];
            flag = true;
        }
    }
    cout << "\n";

    /*if( flag == false )
        cout << "0\n";*/
    return 0;
}

void big_add( int *ini , char *add)
{
    str_rev( add );

    for( int i = 0 ; i < 19999 ; i++)
        ini[i] += add[i] - '0';

    for( int i = 0 ; i+1 < 19999 ; i++ )
    {
        if( ini[i] >= 10 )
        {
            ini[i+1] += ini[i] /10 ;
            ini[i] %= 10;
        }
    }
}

void str_rev( char *add )
{
    int p = 0,q;
    char tmp;

    for( q = 0 ; add[q] != '\0' ; q++);
    q--;
    for( ; p < q ; p++ , q--)
    {
        tmp = add[p];
        add[p] = add[q];
        add[q] = tmp;
    }
    for( q = strlen(add) ; q < 19999 ; q++)
    {
        add[q] = '0';
    }
    add[q] = '\0';
}
