#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
	int n;
	char gar;
	scanf("%d%c",&n,&gar);
	for( int j = 0 ; j < n ; j++){
		int sum = 0;
		int m;
		scanf("%d%c",&m,&gar);
		char g[m+1];
        cin.getline( g , m+1 );
		g[m] = '\0';

		for( int i = 0 ; i+2 < m ; i++ ){
			if( g[i] == '.' ){
				sum++;
				g[i] = '0';
				g[i+1] = '0';
				g[i+2] = '0';
			}
		}
		if( g[m-1] == '.' || g[m-2] == '.')
			sum++;
		cout << "Case " << j+1 << ": " << sum << endl;
	}
	return 0;
}
