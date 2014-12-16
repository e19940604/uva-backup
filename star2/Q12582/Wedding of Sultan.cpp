#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<stack>
using namespace std;
vector<char> m[256];

void mk_connect( char a , char b ){
    m[a].push_back(b);
    m[b].push_back(a);
}

int main(){

    int n;
    char gar;
    scanf("%d%c",&n,&gar);
    for( int k = 1 ; k <= n ; k++ ){
        char input;
        stack<char> vol;

        while( scanf("%c",&input) && input != '\n' ){

            if(vol.size() == 0){
                vol.push(input);
            }
            else if( vol.top() == input ){
                vol.pop();
            }
            else{
                mk_connect( vol.top() , input );
                vol.push( input );
            }
        }

        printf("Case %d\n",k);
        for( int i = 0 ; i < 256 ; i++){
            if( m[i].size() > 0 ){
                printf("%c = %d\n",i,m[i].size());
            }
            m[i].clear();
        }
    }
}
