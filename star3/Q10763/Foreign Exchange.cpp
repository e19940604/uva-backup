#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

bool st( int a , int b){
	return a<b;
}

int main(){
	int n;
	while( scanf("%d",&n ) && n != 0){
		int arr1[n] , arr2[n];
		bool flag = true;
		for (int i = 0; i < n; ++i)
			scanf("%d %d",&arr1[i],&arr2[i]);
		
		sort( arr1 , arr1 + n , st );
		sort( arr2 , arr2 + n , st );

		for (int i = 0; i < n; ++i){
			if( arr1[i] != arr2[i] ){
				flag = false;
				break;
			}
		}

		flag ? printf("YES\n") : printf("NO\n") ;
	}
}