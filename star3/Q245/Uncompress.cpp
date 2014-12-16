#include<iostream>
#include<cstdio>
#include<list>
#include<cstring>
#include<cctype>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    char c;
    list<string> dic;
    int index = 0;
    string container;
    while( scanf("%c" , &c ) && c != '0' ){

        if( isalpha(c) ){
            container.push_back(c);
            printf("%c", c);
        }
        else if( isdigit(c) ){
            int index = c - '0';
            while( isdigit( cin.peek() ) ){
                char peek;
                cin.get(peek);
                index = index*10 + ( peek -'0');
            }

            int i;
            list<string>::iterator it;
            for( i = 1 , it = dic.begin() ; i < index ; i++ , it++ );
            cout << *it;
            string tmp = *it;
            dic.erase( it );
            dic.push_front( tmp );
        }
        else{
            if( container.length() > 0 ){
                string tmp;
                tmp = container;
                dic.push_front( tmp );
                container.clear();
            }
            printf("%c", c);
        }
    }

    /*list<string>::iterator it;
    for( it = dic.begin() ; it != dic.end() ; it++ ){
        cout << *it << endl;
    }*/
}
