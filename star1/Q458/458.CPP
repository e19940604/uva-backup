#include<iostream>
#include<string>
using namespace std;

int main()
{
    int len;
    char input[1000];
    while(cin.getline(input,1000))
    {
        string tmp;

        tmp=input;
        len=tmp.length();

        int ch[len];
        char ouput[len];
        for(int i=0;i<len;i++)
        {
            ch[i]=input[i];
            ouput[i]=ch[i]-7;
            cout << ouput[i];
        }
        cout << endl;

    }

}


