#include <cstdio>
#include <cstdlib>
#include <algorithm>
#define LEN 50

using namespace std;

struct dna
{
	int degree;
	char atcg[LEN];
};

bool st( struct dna a , struct dna b ){
	return a.degree < b.degree;
}

int main(){
	int t;
	char gar;
	scanf("%d%c",&t , &gar );

	while( t-- ){
		scanf("%c",&gar);

		int n , m;
		scanf("%d %d%c" , &n , &m , &gar );

		struct dna d[m];

		for (int i = 0; i < m; ++i){
			for( int j = 0 ; j < n ; ++j ){
				scanf("%c", &d[i].atcg[j]);
			}
			d[i].degree = 0;

			for( int j = 0 ; j < n ; ++j ){
				for( int k = j+1 ; k < n ; ++k ){
					if(d[i].atcg[j] > d[i].atcg[k] )
						d[i].degree++;
				}
			}

			scanf("%c", &gar);
		}

		stable_sort( d , d + m , st );

		for (int i = 0; i < m; ++i){
			for( int j = 0 ; j < n ; j++){
				printf("%c", d[i].atcg[j]);
			}
			printf("\n");
		}

		if( t != 0 )
			printf("\n");
	}
}
