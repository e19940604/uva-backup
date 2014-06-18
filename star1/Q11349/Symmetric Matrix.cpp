#include<iostream>
#include<string>
using namespace std;

int main()
{
    int counter=1,T;

    cin >> T;


        while(T--)
        {

            long long int n,m[10000]={0},a[10000]={0};
            bool sys=true;
            char k;
            cin >> k >> k >> n;
            for(int i=0;i<n*n;i++)
            {

                cin >> m[i];
                a[n*n-1-i]=m[i];
            }

            for(int i=0;i<n*n;i++)
            {
                if(m[i]<0 || a[i]!=m[i])
                {
                    sys=false;
                    break;
                }
            }


            if(sys)
                cout << "Test #" << counter << ": Symmetric."<< endl;
            else
                cout << "Test #" << counter << ": Non-symmetric." <<endl;

            counter++;
        }


}
