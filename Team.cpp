#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int p,v,t;
    int sum=0,c=0;

    for (int i=0;i<n;i++)
    {
        cin >> p >> v >> t;
        sum = p + v + t;
        if (sum >= 2)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}