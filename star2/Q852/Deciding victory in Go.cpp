#include<iostream>
#include<cstdio>
#include<cstdlib>
#define MAX 11
using namespace std;

char grid[MAX][MAX];
bool finded[MAX][MAX];

int nums[256];
char one_time_flag;
int one_time_count;
bool isbreak;

char _x[4]={1,-1,0,0};
char _y[4]={0,0,1,-1};

void dfs( int x , int y ){

    if( grid[x][y] == '.' && finded[x][y] == false){
        finded[x][y] = true;
        one_time_count++;
        for( int i = 0 ; i < 4 ; i++ )
            dfs( x + _x[i] , y + _y[i] );
    }
    else if( grid[x][y] == 'O' || grid[x][y] == 'X'){
        if( one_time_flag == 0 || one_time_flag == grid[x][y] ){
            one_time_flag = grid[x][y];
        }
        else{
            isbreak = true;
        }
    }
    return;
}

int main(){

    int n;
    char gar;
    scanf("%d%c",&n,&gar);

    while( n-- ){
        nums[(int)'X'] = 0;
        nums[(int)'O'] = 0;

        for(int i = 0 ; i < MAX ; i++){
            for(int j = 0 ; j < MAX ; j++ ){
                grid[i][j] = '*';
                finded[i][j] = false;
            }
        }

        for(int i = 1 ; i < MAX-1 ; i++ ){
            for(int j = 1 ; j < MAX-1 ; j++){
                scanf("%c",&grid[i][j]);
                if(grid[i][j] == 'X')
                    nums[(int)'X']++;
                else if( grid[i][j] == 'O')
                    nums[(int)'O']++;
            }
            scanf("%c",&gar);
        }

        for(int i = 1 ; i < MAX-1 ; i++ ){
            for(int j = 1 ; j < MAX-1 ; j++){
                if( grid[i][j] == '.' ){
                    isbreak = false;
                    one_time_flag = 0;
                    one_time_count = 0;
                    dfs( i,j );

                    if( isbreak == false ){
                        nums[(int)one_time_flag] += one_time_count;
                    }
                }
            }
        }


        printf("Black %d White %d\n",nums[(int)'X'],nums[(int)'O']);
    }

}
