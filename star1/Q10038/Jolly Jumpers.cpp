#include<iostream>
using namespace std;

int main()
{
    int n,arr[3000],i,c;


    while(cin >> n)
    {
        bool element[3000];
        bool output=true;

        for(i=0;i<n;i++)
        {
            cin >> arr[i];
            element[i]=false;
        }


        for(i=0;i<n-1;i++)
        {
            int a,b;
            a=arr[i];
            b=arr[i+1];
            if(a-b>0)
                c=a-b;
            else
                c=b-a;

            if( c>=n || c==0 || element[c]==true)
            {
                output=false;
                break;
            }
            else
                element[c]=true;

        }

        if(output)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;

    }


}
