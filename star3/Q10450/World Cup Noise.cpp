#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

long long int f[51];

long long int fi( int n ){
    if( f[n] != -1 )
        return f[n];
    else{
        f[n] = fi( n-1 ) + fi( n-2 );
        return f[n];
    }

}

int main(){
    for( int i = 0 ; i < 51 ; i++ , f[i] = -1 );
    f[1] = 2;
    f[2] = 3;

    int n ;
    scanf("%d" , &n);
    for( int i = 1 ; i <= n ; i++ ){
        int x;
        scanf("%d",&x);
        printf("Scenario #%d:\n%lld\n\n" , i,fi(x));
    }
}
