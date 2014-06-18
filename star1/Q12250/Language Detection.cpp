#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;


int main()
{
    string str;
    int counter = 0;
    while( getline(cin,str) )
    {

        counter++;

        if( str == "#")
            break;
        else if( str == "HELLO")
            printf("Case %d: ENGLISH\n" ,counter);
        else if( str == "HOLA")
            printf("Case %d: SPANISH\n" ,counter);
        else if( str == "HALLO")
            printf("Case %d: GERMAN\n" ,counter);
        else if( str == "BONJOUR")
            printf("Case %d: FRENCH\n" ,counter);
        else if( str == "CIAO")
            printf("Case %d: ITALIAN\n" ,counter);
        else if( str == "ZDRAVSTVUJTE")
            printf("Case %d: RUSSIAN\n" ,counter);
        else
            printf("Case %d: UNKNOWN\n" ,counter);

    }
    return 0;
}
