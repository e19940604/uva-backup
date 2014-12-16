#include<iostream>
#include<cstdio>
#include<cstdlib>
#define MAX 102
#define DIR_NUMS 8
using namespace std;

char oli[MAX][MAX];
int dir_x[DIR_NUMS] = {1,1,1,0,0,-1,-1,-1};
int dir_y[DIR_NUMS] = {-1,0,1,1,-1,1,-1,0};
int ground;

void find_ground( int x , int y ){
    if( oli[x][y] == '@' ){
        oli[x][y] = 'x';
        for(int i = 0 ; i < DIR_NUMS ; i++ )
            find_ground( x + dir_x[i] , y + dir_y[i] );
    }
    else
        return;
    return;
}

int main(){



    int m,n;
    char gar;
    while( scanf("%d%c%d%c",&m,&gar,&n,&gar) && m != 0 && n != 0 ){
        ground = 0;
        for( int i = 0 ; i < MAX ; i++){
            for( int j = 0 ; j < MAX ; j++ ){
                oli[i][j] = 'x';
            }
        }

        for( int i = 1 ; i <= m ; i++ ){
            for( int j = 1 ; j <= n ; j++ ){
                scanf("%c",&oli[i][j]);
            }
            scanf("%c",&gar);
        }

        for( int i = 1 ; i <= m ; i++ ){
            for( int j = 1 ; j <= n ; j++){
                if( oli[i][j] == '@'){
                    find_ground(i,j);
                    ground++;
                }
            }
        }

        printf("%d\n", ground);



        /*for( int i = 1 ; i <= m ; i++ ){
            for( int j = 1 ; j <= n ; j++ ){
                printf("%c",oli[i][j]);
            }
        }*/
    }

}
