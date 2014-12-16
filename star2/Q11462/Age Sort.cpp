#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;
bool st( int a , int b ){
	return a < b;
}

int main(){
	int n;
	while( scanf("%d" , &n) && n != 0 )	{
		int age[n];
		for (int i = 0; i < n; ++i){
			scanf("%d",&age[i]);
		}

		sort( age , age + n , st );

		for (int i = 0; i < n; ++i){
			printf("%d", age[i]);
			if( i != n-1 )
				printf(" ");
		}
		printf("\n");
	}
}