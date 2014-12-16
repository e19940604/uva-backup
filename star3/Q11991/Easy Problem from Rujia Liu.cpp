#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> contain[1000001];

int main(){
	int n,m;

	while( scanf("%d %d" , &n , &m ) != EOF ){
		
		for (int i = 0; i < n; ++i){
			int input;
			scanf("%d",&input);
			contain[input].push_back(i+1);
		}

		for (int i = 0; i < m; ++i){
			int place , number;
			scanf("%d %d" , &place , &number );
			if( contain[number].size() >= place )
				printf("%d\n" , contain[number].at(place-1) );
			else
				printf("0\n");
		}
	}
}