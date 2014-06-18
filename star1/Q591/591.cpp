#include<iostream>
using namespace std;
int cal(int);

int main()
{
    int a,times=1,output;

    cin >> a;

    while(a)
    {
        output = cal(a);

        cout << "Set #" << times << endl;
        cout << "The minimum number of moves is "  << output << "." << endl << endl;

        cin >> a;
        times++;
    }
}

int cal(int a)
{
    int i,sum=0,avg,mov=0;
    int heigh[100];
    for(i=0;i<a;i++)
    {
        cin >> heigh[i];

        sum+=heigh[i];
    }

    avg=sum/a;

    for(i=0;i<a;i++)
    {
        int tmp=avg-heigh[i];
            if(tmp>0)
            mov+=tmp;
    }

    return mov;
}

