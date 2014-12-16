#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main(){

	int n;
	while( scanf("%d",&n) && n != 0 ){
		queue<int> que;
		int dis[n-1];

		for(int i = 0; i < n; ++i){
			que.push(i+1);
		}

		int count = 0;
		while( que.size() != 1 ){
			dis[count++] = que.front();
			que.pop();
			que.push( que.front() );
			que.pop();
		}

		printf("Discarded cards:");
		for (int i = 0; i < n-2 ; ++i){
			printf(" %d,",dis[i]);
		}

		if(count != 0)			
			printf(" %d\n",dis[n-2]);
		else
			printf("\n");

		printf("Remaining card: %d\n",que.front());

		que.pop();
	}

}