#include<cstdio>
using namespace std;
long long int retangle ( int n );

long long int r[51];

long long int retangle( int n ){
    if( r[n] != -1 )
        return r[n];
    else{
        r[n] = retangle( n-1 ) + retangle( n-2 );
    }
}

int main(){
    for( int i = 0 ; i < 51 ; r[i] = -1 , i++);
    r[1] = 1;
    r[2] = 2;

    int x;
    while( scanf("%d",&x ) && x != 0 ){
        printf("%lld\n" , retangle(x));
    }
}
