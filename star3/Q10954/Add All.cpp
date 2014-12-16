#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <queue>

using namespace std;

int main(){

	int n;
	while( scanf("%d",&n) && n != 0){
		priority_queue<int,vector<int>,greater<int> > pq;
		int cost = 0;
		for (int i = 0; i < n; ++i){
			int a;
			scanf("%d",&a);
			pq.push(a);
		}

		while( pq.size() > 1 ){
			int a,b;
			a = pq.top();
			pq.pop();
			b = pq.top();
			pq.pop();
			pq.push( a+b );
			cost += a+b;
		}
		printf("%d\n", cost );

	}

}