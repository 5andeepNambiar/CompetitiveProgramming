#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int l=0,u=0;
    string s;
    cin >> s;

    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int c = s[i];
        if(islower(c))
        {
            l++;
        }
        else if(isupper(c))
        {
            u++;
        }
    }

    if(l >= u)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<endl;
    }

    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s<<endl;
    }
    
    return 0;
}