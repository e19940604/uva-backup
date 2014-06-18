#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int x,y;
    int counter=0;
    while(cin >> x >> y && x && y)
    {
        counter++;
        if(counter > 1)
            cout << endl;
        cin.get();

        int arr[x+2][y+2];
        char tmp;

        for(int i = 0 ; i < x+2 ; i++)
        {
            for( int j = 0 ; j < y+2 ; j++)
            {
                arr[i][j] = -1;
            }
        }


        for(int i = 1 ; i <= x ; i++)
        {
            for( int j = 1 ; j <= y ; j++)
            {
                cin >> tmp;
                if( tmp != '*')
                    arr[i][j] = 0;
            }
        }

        for(int i = 1 ; i <= x ; i++)
        {
            for( int j = 1 ; j <= y ; j++)
            {
                if( arr[i][j] == -1)
                {
                    if( arr[i+1][j] != -1)
                        arr[i+1][j]++;
                    if( arr[i][j+1] != -1)
                        arr[i][j+1]++;
                    if( arr[i-1][j] != -1)
                        arr[i-1][j]++;
                    if( arr[i][j-1] != -1)
                        arr[i][j-1]++;
                    if( arr[i+1][j-1] != -1)
                        arr[i+1][j-1]++;
                    if( arr[i+1][j+1] != -1)
                        arr[i+1][j+1]++;
                    if( arr[i-1][j+1] != -1)
                        arr[i-1][j+1]++;
                    if( arr[i-1][j-1] != -1)
                        arr[i-1][j-1]++;
                }
            }
        }


        cout << "Field #" << counter << ":" << endl;
        for(int i = 1 ; i <= x ; i++)
        {
            for( int j = 1 ; j <= y ; j++)
            {
                if( arr[i][j] >=0)
                    cout << arr[i][j];
                else
                    cout << "*";
            }
            cout << endl;
        }
    }
}
