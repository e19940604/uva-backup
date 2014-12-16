#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;

int main(){

	int n;
	char c;
	
	stack<char> stk;
	scanf("%d%c",&n,&c);


	while(n--){
		bool flag = true;
		while( stk.size() > 0 )
			stk.pop();

		while( scanf("%c",&c) != EOF  && c != '\n' ){
			if( c == ')' ){
				if( stk.size() != 0 && stk.top() == '('  )
					stk.pop();
				else{
					while(c!='\n')
						scanf("%c",&c);
					flag = false;
					break;
				}
			}
			else if( c == ']' ){
				if( stk.size() != 0 && stk.top() == '[')
					stk.pop();
				else{
					while(c!='\n')
						scanf("%c",&c);
					flag = false;
					break;
				}
			}
			else
				stk.push(c);
		}

		if( stk.size() == 0 && flag )
			printf("Yes\n");
		else
			printf("No\n");


	}
}
