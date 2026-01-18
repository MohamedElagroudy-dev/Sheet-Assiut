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
    string s,t;
    cin>>s;
    cin>>t;
    cout<<s.size()<<" "<<t.size()<<endl;
    cout<<s<<" "<<t<<endl;

    return 0;
}
