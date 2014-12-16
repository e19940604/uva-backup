#include<iostream>
#include<cstdio>
using namespace std;
long long int retangle( int n );
long long int one( int n );

long long int r[31];
long long int o[31];

long long int retangle( int n ){
    if( r[n] != -1 )
        return r[n];
    else{
        r[n] = retangle( n-2 ) + 2 * one( n-1 );
    }
}

long long int one( int n ){
    if( o[n] != -1 )
        return o[n];
    else{
        o[n] = retangle( n-1 ) + one( n-2 );
    }
}

int main(){

    for( int i = 0 ; i < 31 ; i++){
        if( i%2 == 0){
            r[i] = -1;
            o[i] = 0;
        }
        else{
            r[i] = 0;
            o[i] = -1;
        }
    }
    r[2] = 3;
    o[1] = 1;

    int n;
    while( scanf("%d",&n) && n != -1 ){
        if( n != 0 )
            printf("%lld\n" , retangle(n));
        else
            printf("1\n");
    }
}
