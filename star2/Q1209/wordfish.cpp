#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;

struct word{
    int value;
    char str[22];
}center[21];

int word_value( char * str ){
    int small = 50;
    for( int i = 0 ; i + 1 < strlen( str ) ; i++ ){
        int tmp = str[i] - str[i+1];
        if(tmp < 0 )
            tmp *= -1;
        if( small > tmp ){
            small = tmp;
        }
    }
    return small;
}

bool st( word a , word b ){
    return a.value > b.value;
}

int main(){
    while( fgets( center[10].str , 22 , stdin )  ){
        char tmp[22];
        strcpy( tmp , center[10].str );
        center[10].value = word_value( center[10].str );

        for( int i = 9 ; i >= 0 ; i-- ){
            prev_permutation( tmp , tmp + strlen(tmp) - 1 );
            strcpy( center[i].str , tmp );
            center[i].value = word_value( tmp );
        }

        strcpy( tmp , center[10].str );

        for( int i = 11 ; i < 21 ; i++ ){
            next_permutation( tmp , tmp + strlen(tmp) - 1 );
            strcpy( center[i].str , tmp );
            center[i].value = word_value( tmp );
        }

        stable_sort( center , center + 21 , st );

        for( int i = 0 ; i < strlen(center[0].str) -1  ; i++)
            printf("%c",center[0].str[i] );
        printf("%d\n",center[0].value);
    }

}
