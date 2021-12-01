#include<iostream>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int a[n];
    int g_sum = 0,l_sum = 0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i] > h)
        {
            g_sum += 2;
        }

        else if(a[i] <= h)
        {
            l_sum += 1;
        }
    }

    int min_width = g_sum + l_sum;
    cout<<min_width<<endl;
    return 0;
}