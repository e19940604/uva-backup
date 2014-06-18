#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
using namespace std;

bool sorting( int a , int b){

	return a>b;
}


int main(){

	int n;
	cin >> n;
	while(n--){
		int sum = 0;
		int m;
		cin >> m;
		int items[m];
		for( int i = 0 ; i < m ; i++)
			cin >> items[i];
		sort( items , items + m , sorting );
		
		for( int i = 2 ; i < m ; i+= 3 )
			sum += items[i];
		cout << sum << endl;
	}
}