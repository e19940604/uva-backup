#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
long long int retangle( int n );
long long int flow( int n );

using namespace std;

long long int r[100];
long long int f[100];

long long int retangle( int n ){
    if( r[n] != -1 )
        return r[n];
    else{
        r[n] = retangle( n-1 ) + 2*retangle( n-2 ) + 2*flow( n-1 );
        return r[n];
    }
}

long long int flow( int n ){
    if( f[n] != -1 )
        return f[n];
    else{
        f[n] = retangle( n-1 ) + retangle( n-2 );
        return f[n];
    }
}

int main(){
    for( int i = 0 ; i < 100 ; i++){
        r[i] = -1;
        f[i] = -1;
    }
    r[1] = 1;
    r[2] = 5;
    f[1] = 1;
    f[2] = 2;
    int x;
    scanf("%d",&x);
    while( x-- ){
        int y;
        scanf("%d",&y);
        printf("%lld\n",retangle(y));
    }
}
