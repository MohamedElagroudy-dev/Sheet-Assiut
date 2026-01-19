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
    string s;
    cin>>s;
    bool flag = true;
    long long s_size = s.size();
    for(int i = 0 ; i< s_size/2 ; i++)
    {
        if(s[i] != s[s_size -i -1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout<<"YES";
    else
        cout<<"NO";
 
    return 0;
}