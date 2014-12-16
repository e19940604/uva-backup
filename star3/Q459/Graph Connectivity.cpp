#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

vector<char> alpha[26];
bool isvisit[26];

void dfs( int n ){
    if( isvisit[n] == false ){
        isvisit[n] = true;
        for( unsigned int i = 0 ; i < alpha[n].size() ; i++ ){
            if( isvisit[ alpha[n].at(i) - 'A' ] == false)
                dfs( alpha[n].at(i) - 'A' );
        }
    }
    return;
}

int main(){

    int n;
    char gar;
    scanf("%d%c",&n,&gar);
    scanf("%c",&gar);
    while(n--){
        char large_point;
        int graph = 0;

        scanf("%c",&large_point);
        scanf("%c",&gar);

        for(int i = 0 ; i < 26 ; i++)
            isvisit[i] = false;

        char points[5];
        while( fgets(points,5,stdin)  && points[0] != '\n' && !feof(stdin) ){
            alpha[ (int)(points[0] -'A') ].push_back( points[1] );
            alpha[ (int)(points[1] -'A') ].push_back( points[0] );
        }

        for( int i = 0 ; i <= large_point - 'A' ; i++ ){
            if( isvisit[i] == false ){
                dfs( i );
                graph++;
            }
        }
        printf("%d\n",graph);
        if( n != 0 )
            printf("\n");

        for( int i = 0 ; i < 26 ; i++ ){
            alpha[i].clear();
            isvisit[i] = false;
        }
    }
}
