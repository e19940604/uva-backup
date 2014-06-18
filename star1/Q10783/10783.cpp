#include<iostream>
using namespace std;
int odd_sum(int,int);

int main()
{
    int m,counter=1;

    cin >> m;

    while(m)
    {
        int a,b,result;
        cin >> a >> b;
        result=odd_sum(a,b);

        cout << "Case " << counter << ": " << result << endl;
        --m;

        ++counter;
    }

}

int odd_sum(int a,int b)
{
    int i,sum=0;
    for(i=a;i<=b;i++)
    {
        if(i%2==1)
            sum+=i;
    }

    return sum;
}
