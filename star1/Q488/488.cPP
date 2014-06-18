#include<iostream>
using namespace std;
void upwave(int);
void downwave(int);

int main()
{
    int a,i,j,m,n;

    cin >> a >> m >> n;

    for(i=a-1;i>=0;i--)
    {
        while(n)
        {
            upwave(m);
            downwave(m);
            if(i!=0||n-1!=0)
                cout << endl;
            --n;
        }

        if(i)
        {
            cin >> m >> n;
        }
    }
    return 0;
}



void upwave(int m)
{
    int i,j;

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << i ;

        }

        cout <<endl;
    }

}

void downwave(int m)
{
    int i,j;

    for(i=m-1;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            cout << i;
        }
    cout << endl;
    }

}
