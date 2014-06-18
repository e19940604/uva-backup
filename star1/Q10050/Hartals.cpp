#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        int day;
        cin >> day;
        bool calender[day+1];

        for( int i = 0 ; i <= day ; i++)
            calender[i] = true;

        int hartal;
        int counter = 0;
        int party;

            cin >> party;

        for( int i = 0 ; i < party ; i++)
        {
            cin >> hartal;
            for( int j = 1 ; j <= day ; j++)
            {
                if( j % hartal == 0 && j%7 !=6 && j%7 != 0 && calender[j] == true )
                {
                    calender[j] = false;
                }

            }
        }

        for( int i = 1 ; i <= day ; i++)
        {
            if( !calender[i] )
                counter++;
        }
        printf("%d\n",counter);

    }
}
