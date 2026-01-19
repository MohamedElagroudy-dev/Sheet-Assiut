#include <iostream>
#include <cmath>
using namespace std;

#define fast \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL)

int main()
{
    fast;
    int c;
    cin>>c;
    while(c--)
    {
        string s;
        cin>>s;
        bool flag = false;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]==s[i+2] && s[i]!=s[i+1])
            {
                flag = true;
            }
        }
        if(flag)
            cout<<"Good"<<endl;
        else
            cout<<"Bad"<<endl;
    }

    return 0;
}
