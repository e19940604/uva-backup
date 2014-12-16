#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

int m;

bool cmp( int a , int b ){
	if( a % m != b % m )
		return a % m < b % m;
	else{
		if( a % 2 == 0 && b % 2 == 0){
			return a < b;
		}
		else if( a % 2 != 0 && b % 2 != 0){
			return a > b;
		}
		else{
			return a % 2 == 0 ? false : true;
		}
	}
}

int main(){

	int n;

	while( scanf("%d %d" , &n , &m ) && n != 0 ){
		int arr[n];
		printf("%d %d\n", n , m );

		for (int i = 0; i < n; ++i){
			scanf("%d",&arr[i]);
		}

		sort( arr , arr + n , cmp );

		for (int i = 0; i < n; ++i){
			printf("%d\n", arr[i] );
		}
	}

	printf("0 0\n");

}
