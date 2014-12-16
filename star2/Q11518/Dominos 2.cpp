#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<vector>
using namespace std;

int fall;

void dfs( int hit , vector<int> domi[] , bool falled[] ){
    if( !falled[hit] ){
        falled[hit] = true;
        fall++;
        for( unsigned int i = 0 ; i < domi[hit].size() ; i++){
            dfs( domi[hit][i] , domi , falled );
        }
    }
    return;
}

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        int n , m , l;
        scanf("%d %d %d",&n,&m,&l);
        vector<int> domino[n+1];
        bool falled[n+1];
        for( int i = 0 ; i < n ; i++ , falled[i] = false);

        for( int i = 0 ; i < m ; i++){
            int do1 , do2;
            scanf("%d %d",&do1,&do2);
            domino[do1].push_back(do2);
        }

        fall = 0;
        for( int i = 0 ; i < l ; i++ ){
            int hit;
            scanf("%d",&hit);
            dfs( hit , domino , falled );
        }

        printf("%d\n",fall);
    }

}
