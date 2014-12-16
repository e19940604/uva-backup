#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

bool s( char a , char b){
    return a > b;
}

int main(){
	char t[60];
	while( fgets( t , 52 , stdin ) && t[0] != '#' ){
        char to_sort[60];
        strcpy( to_sort , t );
        sort( to_sort , to_sort + strlen( to_sort )-1, s );

        if( strcmp( to_sort , t ) == 0 )
            printf("No Successor\n");
        else{
            next_permutation(t,t+strlen(t) -1 );
            for(int i = 0 ; i < strlen(t)-1 ; i++ ){
                printf("%c",t[i]);
            }
            printf("\n");
        }
	}
}
