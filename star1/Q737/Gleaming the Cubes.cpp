#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cctype>
using namespace std;

struct cube
{
    int x;
    int y;
    int z;
    int to_x;
    int to_y;
    int to_z;
    int edge;
};

int main()
{
    int n;
    while(cin >> n && n)
    {
        int min_x,min_y,min_z,max_x=0,max_y=0,max_z=0;
        long long int ans;
        cube my_cube[n];
        for( int i = 0 ; i < n ; i++)
        {
            cin >> my_cube[i].x >> my_cube[i].y >> my_cube[i].z >> my_cube[i].edge;

            my_cube[i].to_x = my_cube[i].x + my_cube[i].edge;
            my_cube[i].to_y = my_cube[i].y + my_cube[i].edge;
            my_cube[i].to_z = my_cube[i].z + my_cube[i].edge;
            if( i == 0)
            {
                min_x = my_cube[i].to_x;
                min_y = my_cube[i].to_y;
                min_z = my_cube[i].to_z;
            }
        }

        for( int i = 0 ; i < n ; i++)
        {
            if( min_x > my_cube[i].to_x )
                min_x = my_cube[i].to_x;
            if( min_y > my_cube[i].to_y )
                min_y = my_cube[i].to_y;
            if( min_z > my_cube[i].to_z )
                min_z = my_cube[i].to_z;

            if( max_x < my_cube[i].x )
                max_x = my_cube[i].x;
            if( max_y < my_cube[i].y )
                max_y = my_cube[i].y;
            if( max_z < my_cube[i].z )
                max_z = my_cube[i].z;
        }
        //cout << min_x << min_y << min_z ;
        ans = max(0,(min_z-max_z)*(min_x - max_x)*(min_y - max_y));
        cout << ans << endl;
    }
}
