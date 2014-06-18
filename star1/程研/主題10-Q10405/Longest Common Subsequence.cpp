#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    string str1,str2;
    while (getline(cin,str1))
    {
        getline(cin,str2);
        int lcs[str1.length()+1][str2.length()+1];
        memset(lcs,0,sizeof(lcs));

        for( int i = 1 ; i <= str1.length() ; i++)
        {
            for(int j = 1 ; j <= str2.length() ; j++)
            {
                if(str1.at(i-1) == str2.at(j-1))
                    lcs[i][j] = lcs[i-1][j-1] +1 ;
                else
                    lcs[i][j] = max(lcs[i-1][j] , lcs[i][j-1]);
            }
        }

        cout << lcs[str1.length()][str2.length()] << endl;

    }


}
