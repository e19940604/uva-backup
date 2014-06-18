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
    int counter = 0;
    while( n-- )
    {
        counter++;
        char gg;
        char str1[50];
        char str2[50];
        char *ne1;
        char *ne2;
        ne1 = new char[50];
        ne2 = new char[50];
        char *tmp;
        int i;
        bool len=true;

        for( i = 0 ; i < 50 ; i++)
        {
            ne1[i] = 0;
            ne2[i] = 0;
        }

        for( i = 0 ; i <50 ; i++ )
        {
            scanf("%c",&gg);
            if(gg == '\n')
                break;
            str1[i] = gg;
        }
        str1[i] = '\0';

        for( i = 0 ; i <25 ; i++ )
        {
            scanf("%c",&gg);
            if(gg == '\n')
                break;
            str2[i] = gg;
        }
        str2[i] = '\0';


        if( strlen(str1) != strlen(str2))
            len = false;


        tmp =strtok(str1," ");
        while( tmp != NULL )
        {
            strcat(ne1,tmp);
            tmp = strtok( NULL , " ");
        }

        tmp =strtok(str2," ");
        while( tmp != NULL )
        {
            strcat(ne2,tmp);
            tmp = strtok( NULL , " ");
        }



        if( !strcmp(str1,str2) && len )
            cout << "Case "<< counter << ": "<< "Yes" << endl;
        else if( !strcmp( ne1 , ne2)  )
            cout << "Case "<< counter << ": "<< "Output Format Error" << endl;
        else
            cout << "Case "<< counter << ": "<< "Wrong Answer" << endl;

        delete ne1;
        delete ne2;
        ne1 = NULL;
        ne2 = NULL;
    }

    return 0;
}
