#include<iostream>
#include<string>
using namespace std;

int main()
{
    int w,h,n;

    cin >> w >> h >> n;

    while(w!=0 && h!=0)
    {
        int arr[500][500]={0};
        int x1,y1,x2,y2,tmp,counter=0;

        while(n--)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if(x1>x2)
            {
                tmp=x1;
                x1=x2;
                x2=tmp;
            }
            if(y1>y2)
            {
                tmp=y1;
                y1=y2;
                y2=tmp;
            }
            for(int i=x1-1;i<x2;i++)
            {
                for(int j=y1-1;j<y2;j++)
                {
                    arr[i][j]=1;
                }
            }
        }

        for(int i=0;i<w;i++)
        {
            for(int j=0;j<h;j++)
            {
                if(arr[i][j]==0)
                    counter++;
            }
        }

        if(counter==0)
            cout << "There is no empty spots." << endl;
        else if(counter==1)
            cout << "There is one empty spot." << endl ;
        else
            cout << "There are " << counter << " empty spots." << endl;



        cin >> w >> h >> n;
    }
}
