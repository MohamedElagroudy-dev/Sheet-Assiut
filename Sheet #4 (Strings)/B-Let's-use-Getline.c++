#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

#define fast \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL)

int main()
{
    fast;
    string s,t;
    getline(cin,s); 
    int pos = INT_MAX;
    for(int i = 0 ; i<=s.size();i++)
    {
        if(s[i] == '\\' )
        {
            pos = i;
            break;
        }
    }
    s = s.erase(pos,s.size()+1);
    cout<<s<<endl;

    return 0;
}
