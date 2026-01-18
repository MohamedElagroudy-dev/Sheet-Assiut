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
        if(s.size() <= 10)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s.front()<<s.size()-2<<s.back()<<endl;
        }
    }

    return 0;
}
