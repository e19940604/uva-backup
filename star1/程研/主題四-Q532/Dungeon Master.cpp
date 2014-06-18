#include<iostream>
#include<queue>
#include<cstdio>
using namespace std;

struct node
{
    int x;
    int y;
    int z;
    int step;
};

int main()
{
    freopen("123.txt","r",stdin);
    int l,r,c;

    while( cin >> l >> r >> c && l )
    {
        char cmap[32][32][32];

        int start_x,start_y,start_z;
        queue<struct node>BFS_queue;
        struct node current,next;
        bool endflag = false;
        int dx[6] = {1,-1,0,0,0,0};
        int dy[6] = {0,0,1,-1,0,0};
        int dz[6] = {0,0,0,0,1,-1};

        for(int i=0; i<l+2 ; ++i)
            for(int j=0 ; j<r+2; ++j)
                for(int k=0 ; k<c+2 ; ++k)
                    cmap[i][j][k] = 0;


        for(int i=1; i<=l ; ++i)
        {
            for(int j=1 ; j<=r ; ++j)
            {
                for(int k=1 ; k<=c ; ++k)
                {
                    cin >> cmap[i][j][k];
                    if( cmap[i][j][k] == 'S')
                    {
                        start_z = i;
                        start_y = j;
                        start_x = k;
                    }
                }
            }
        }

        current.x = start_x;
        current.y = start_y;
        current.z = start_z;
        current.step = 0;

        BFS_queue.push( current );

        while( !BFS_queue.empty() )
        {
            current = BFS_queue.front();
            BFS_queue.pop();

            for(int i=0 ; i<6 ; ++i )
            {
                next.x = current.x + dx[i];
                next.y = current.y + dy[i];
                next.z = current.z + dz[i];
                next.step = current.step + 1 ;

                if( cmap[  next.z ][ next.y ][ next.x ] == '.' )
                {
                   // cout << next.x << next.y << next.z << endl;
                    BFS_queue.push( next );
                    cmap[ next.z ][ next.y ][ next.x ] = '#';
                }
                else if( cmap[ next.z ][ next.y ][ next.x ] == 'E' )
                {
                    endflag = true ;
                    break;
                }
            }

            if( endflag)
                break;
        }

        if( endflag )
            cout << "Escaped in " << next.step << " minute(s)." << endl;
        else
            cout << "Trapped!" << endl ;
    }

    return 0;
}
