#include<stdio.h>
#include<stdlib.h>

char lake[100][100];

int main()
{
    int m;
    char gg;
    scanf("%d",&m);
    scanf("%c",&gg);
    scanf("%c",&gg);
    while( m-- )
    {
        int x,y;
        scanf("%d %d%c",&x,&y,&gg);
        printf("%d %d",x,y);
    }

    return 0;
}
