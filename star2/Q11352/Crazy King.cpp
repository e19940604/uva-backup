#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<queue>
using namespace std;

struct node{
    int x;
    int y;
    int step;
};

int _x[8] = { 2,1,2,1,-2,-1,-2,-1};
int _y[8] = { 1,2,-1,-2,1,2,-1,-2};
int dx[8] = { 1,1,1,0,0,-1,-1,-1};
int dy[8] = { 1,0,-1,1,-1,1,-1,0};
char grid[120][120];

int main(){

    int n;
    char gar;
    scanf( "%d%c",&n ,&gar );
    while( n-- ){
        struct node current,next;
        queue<struct node>bfs_q;
        bool flag = false;
        int m,n;
        scanf("%d%c%d%c",&m,&gar,&n,&gar);

        for( int i = 0 ; i < m+2 ; i++){
            for( int j = 0 ; j < n+2 ; j++ ){
                grid[i][j] = '*';
            }
        }

        for( int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                char c;
                scanf("%c",&c);

                if( c == 'A' || c == 'B' ){
                    if( c == 'A' ){
                        current.x = i;
                        current.y = j;
                        current.step = 0;
                        bfs_q.push(current);
                    }
                    grid[i][j] = c;
                }
                else if( c == 'Z' ){
                    grid[i][j] = c;
                    for( int k = 0 ; k < 8 ; k++){
                        if( grid[i+_x[k]][j+_y[k]] == '.' || grid[i+_x[k]][j+_y[k]] == '*' )
                            grid[i+_x[k]][j+_y[k]] = '#';
                    }
                }
                else{
                    if( grid[i][j] == '*' )
                        grid[i][j] = c;
                }


            }

            scanf("%c",&gar);
        }

        for( int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                printf("%c",grid[i][j]);
            }
            printf("\n");
        }

        while( !bfs_q.empty() ){
            current = bfs_q.front();
            bfs_q.pop();
            for( int i = 0 ; i < 8 ; i++){
                next.x = current.x + dx[i];
                next.y = current.y + dy[i];
                next.step = current.step+1;

                if( grid[next.x][next.y] == '.' ){
                    bfs_q.push(next);
                    grid[next.x][next.y] = '&';
                }
                else if( grid[next.x][next.y] == 'B' ){
                    while( !bfs_q.empty() )
                        bfs_q.pop();
                    flag = true;
                    break;
                }
            }
        }

        if( flag )
            printf("Minimal possible length of a trip is %d\n",next.step);
        else
            printf("King Peter, you can't go now!\n");
    }
}
