#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cctype>
using namespace std;
int main()
{
    char c;
    bool now_flag;
    scanf("%c",&c);
    if( isalpha(c) )
        now_flag = true;
    else
        now_flag = false;
    int counter = 0;

    while( scanf("%c",&c) != EOF )
    {
        if( isalpha(c) && now_flag == false )
        {
            now_flag = true;
        }
        else if( !isalpha(c) && now_flag == true )
        {
            counter++;
            now_flag = false;
        }

        if( c == '\n')
        {
            cout << counter << endl;
            counter = 0;
        }

    }
}
