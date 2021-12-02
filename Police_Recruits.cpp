#include<iostream>
using namespace std;

int main()
{
    int n,a[n],c=0,sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i] > 0)
        {
            sum+=a[i];
        }

        else 
        {
            if(sum > 0)
            {
                sum--;
            }

            else
            {
                c++;
            }
        }

    }

    cout<<c<<endl;
    return 0;

}