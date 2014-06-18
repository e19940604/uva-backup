#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

int main(){

	int n;
	char gar;
	scanf("%d%c" , &n , &gar);
	for( int w = 1 ; w <= n ; w++){

		int m;
		scanf("%d%c" , &m , &gar);
		char space[m+2][m+2];
		memset( space , 0 , (m+2) * (m+2) );

		for( int i = 1 ; i <= m ; i++ ){
			for( int j = 1 ; j <= m ; j++ ){
				cin >> space[i][j];
			}
		}

		for( int i = 1 ; i <= m ; i++ ){
			for( int j = 1 ; j <= m ; j++ ){
				char n_str = 'A';
				while( space[i][j] == '.'){
					if( space[i][j+1] == n_str || space[i+1][j] == n_str || space[i][j-1] == n_str || space[i-1][j] == n_str  )
						n_str++;
					else
						space[i][j] = n_str;
				}
			}
		}

		cout << "Case " << w << ":" << endl;
		for( int i = 1 ; i <= m ; i++ ){
			for( int j = 1 ; j <= m ; j++ ){
				cout << space[i][j];
			}
			cout << endl;
		}

	}
	return 0;
}
