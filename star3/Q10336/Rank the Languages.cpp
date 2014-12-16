#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define MAX 102
#define DIR_NUMS 8
using namespace std;

char grid[MAX][MAX];

struct data{
    char country;
    int number;
}datas[256];


void dfs( int x , int y , char lang ){

    if( grid[x][y] != '*' && grid[x][y] == lang ){
        grid[x][y] = '*';
        dfs( x+1 , y , lang);
        dfs( x , y+1 , lang);
        dfs( x , y-1 , lang);
        dfs( x-1 , y , lang);
    }

    return;
}

bool st( struct data a, struct data b){
    if( a.number != b.number)
        return a.number>b.number;
    else
        return a.country < b.country;
}

int main(){
    int t;
    char gar;
    scanf("%d%c",&t,&gar);
    for(int k = 1 ;k <= t ; k++){
        int m,n;

        memset(grid,'*',MAX*MAX);

        for( int i = 0 ; i < 256 ; i++ ){
            datas[i].country = 0;
            datas[i].number = 0;
        }

        scanf("%d%c%d%c",&m,&gar,&n,&gar);
        for( int i = 1 ; i <= m ; i++ ){
            for( int j = 1 ; j <= n ; j++ ){
                scanf("%c",&grid[i][j]);
            }
            scanf("%c",&gar);
        }

        for( int i = 1 ; i <= m ; i++ ){
            for( int j = 1 ; j <= n ; j++ ){

                //printf("%c",grid[i][j]);
                if( grid[i][j] != '*' ){
                    datas[(int)grid[i][j]].country = grid[i][j];
                    datas[(int)grid[i][j]].number++;
                    dfs( i , j , grid[i][j] );
                }
            }
            //printf("\n");
        }

        sort( datas , datas+256 , st );

        printf("World #%d\n",k);
        for( int i = 0 ; i < 256 ; i++ ){
            if( datas[i].number > 0 ){
                printf("%c: %d\n",datas[i].country,datas[i].number);
            }
        }
    }
}

