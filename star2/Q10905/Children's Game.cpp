#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

bool st( string a , string b ){
	return a + b > b + a;
}

int main(){
	
	int n;
	while( scanf("%d" , &n) && n != 0 )	{
		string num[n];
		for (int i = 0; i < n; ++i){
			cin >> num[i];
		}

		sort( num , num + n , st );

		for (int i = 0; i < n; ++i){
			cout << num[i];
		}

		cout << endl;
		
	}
}