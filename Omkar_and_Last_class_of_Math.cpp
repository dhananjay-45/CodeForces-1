#include<iostream>
#include<math.h>
using namespace std;
void solution()
{
        long int flag=0,j,n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else
        {
            for(j=3;j<=sqrt(n);j++)
            {
                if(n%j==0)
                {
                    cout<<n/j<<" "<<n-n/j<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"1 "<<n-1<<endl;
            }
        }
}
int main()
{
    long int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        solution();
    }
    return 0;
}
