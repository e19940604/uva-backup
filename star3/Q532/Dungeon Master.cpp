#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<queue>
using namespace std;

struct node{
    int x;
    int y;
    int z;
    int step;
};

int _x[6] = { 0,0,0,0,1,-1 };
int _y[6] = { 1,-1,0,0,0,0 };
int _z[6] = { 0,0,1,-1,0,0 };

int main(){

    int l,r,c;
    char gar;
    while( scanf("%d%c%d%c%d%c",&l,&gar,&r,&gar,&c,&gar) && l != 0 ){
        bool flag = false;
        struct node current,next;
        queue<struct node> bfs_q;
        char grid[l+2][r+2][c+2];
        for( int i = 0 ; i < l+2 ; i++ ){
            for( int j = 0 ; j < r+2 ; j++ ){
                for( int k = 0 ; k < c+2 ; k++ ){
                    grid[i][j][k] = '#';
                }
            }
        }

        for( int i = 1 ; i <= l ; i++ ){
            for( int j = 1 ; j <= r ; j++ ){
                for( int k = 1 ; k <= c ; k++ ){
                    scanf( "%c",&grid[i][j][k]);
                    if( grid[i][j][k] == 'S' ){
                        current.z = i;
                        current.y = j;
                        current.x = k;
                        current.step = 0;
                        bfs_q.push(current);
                    }
                }
                scanf("%c",&gar);
            }
            scanf("%c",&gar);
        }

        while( !bfs_q.empty() ){

            current = bfs_q.front();
            bfs_q.pop();

            for( int i = 0 ; i < 6 ; i++ ){
                next.x = current.x + _x[i];
                next.y = current.y + _y[i];
                next.z = current.z + _z[i];
                next.step = current.step +1 ;

                if( grid[next.z][next.y][next.x] == '.'){
                    bfs_q.push( next );
                    grid[next.z][next.y][next.x] = '#';
                }
                else if( grid[next.z][next.y][next.x] == 'E' ){
                    while( !bfs_q.empty() )
                        bfs_q.pop();
                    flag = true;
                    break;
                }
            }
        }

        if( flag )
            printf("Escaped in %d minute(s).\n", next.step );
        else
            printf("Trapped!\n");

        /*for( int i = 0 ; i < l+2 ; i++ ){
            for( int j = 0 ; j < r+2 ; j++ ){
                for( int k = 0 ; k < c+2 ; k++ ){
                    printf( "%c",grid[i][j][k]);
                }
                printf("\n");
            }
            printf("\n");
        }*/
    }
}
