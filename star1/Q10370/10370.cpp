#include<iostream>
#include<iomanip>
using namespace std;
float averge(int,int arr[]);

int main()
{
    int m;
    cin >> m;
    while(m)
    {
        int a;      //輸入幾次成績
        int i=0;    //控制迴圈
        int arr[1000];

        cin >> a;
        while(i<a)
        {
            cin >> arr[i];
            ++i;
        }

        cout << fixed << setprecision(3) << averge(a,arr) << "%" << endl;

        --m;
    }

}

float averge(int a,int arr[])
{
    int i,round;
    float counter=0,output;
    float sum=0,avg;
    for(i=0;i<a;i++)
    {
        sum+=arr[i];
    }

    avg = sum/float(a);

    for(i=0;i<a;i++)
    {
        if(arr[i]>avg)
            counter++;
    }

    output = counter/float(a)*100;

    return output;
}


