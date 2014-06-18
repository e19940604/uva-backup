#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    cin.get();
    while( n-- )
    {

        char a,b,c,g;
        int num;
        int alpha;

        scanf("%c%c%c-%d%c",&a,&b,&c,&num,&g);
        alpha = (a-'A')*26*26 + (b-'A')*26 + c-'A';
        //cout << alpha << " " << num;
        if( (alpha - num) > 100 || (alpha - num) < -100)
            printf("not nice\n");
        else
            printf("nice\n");
    }
    return 0;
}
