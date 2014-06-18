#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    string str1,str2;
    int counter=0;
    while(getline(cin,str1) && str1.size() !=0 )
    {
        counter++;
        if(str1.at(0) == '#' && str1.length() == 1)
            break;
        getline(cin,str2);
        int lcs[str1.length()+1][str2.length()+1];
        memset(lcs,0,sizeof(lcs));

        for( int i = 1 ; i <= (int)str1.length() ; i++)
        {
            for(int j = 1 ; j <= (int)str2.length() ; j++)
            {
                if(str1.at(i-1) == str2.at(j-1))
                    lcs[i][j] = lcs[i-1][j-1] +1 ;
                else
                    lcs[i][j] = max(lcs[i-1][j] , lcs[i][j-1]);
            }
        }

        cout <<  "Case #" << counter << ": you can visit at most "<< lcs[str1.length()][str2.length()] <<" cities." << endl;

    }


}
