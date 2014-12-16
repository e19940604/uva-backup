#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct point
{
    int x;
    int y;
};

bool cross( point vec1 , point vec2);


int main()
{
    int n;

    while( cin >> n && n )
    {
        point dot[n];
        point vec[n];
        bool dir;
        bool ans;
        for( int i = 0 ; i < n ; i ++)
            cin >> dot[i].x >> dot[i].y;

        for( int i = 0 ; i < n ; i++)
        {
            if( i == n-1)
            {
                vec[i].x = dot[0].x-dot[i].x;
                vec[i].y = dot[0].y-dot[i].y;
            }
            else
            {
                vec[i].x = dot[i+1].x - dot[i].x;
                vec[i].y = dot[i+1].y - dot[i].y;
            }
        }

        dir = cross( vec[n-1] , vec[0] );

        for( int i = 0 ; i+1 < n ; i++)
        {
            if( dir == cross( vec[i] , vec[i+1]))
                ans = true;
            else
            {
                ans = false;
                break;
            }
        }

        if( ans)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}

bool cross( point vec1 , point vec2)
{
    if(vec1.x*vec2.y-vec1.y*vec2.x > 0)
        return true;
    else
        return false;
}
