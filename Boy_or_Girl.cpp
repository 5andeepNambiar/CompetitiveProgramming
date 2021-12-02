#include<iostream>
#include<string>
using namespace std;

int main()
{
    int c=0;
    string username;
    cin>> username;
    for(int i=0;i<username.length();i++)
    {
        for(int j=i+1;j<username.length();j++)
        {
            if(username[i]==username[j])
            {
                c++;
                break;
            }
        }
    }
    int res = username.length() - c;
    if(res % 2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}