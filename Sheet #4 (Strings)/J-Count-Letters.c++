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
    int freq[128]= {0};
    for(int i = 0 ; i< s.size(); i++)
    {
        freq[s[i]]++;
    }
    for(int i = 'a' ;i<='z';i++)
    {
        if(freq[i] > 0)
            cout<<char(i)<<" : "<<freq[i]<<endl;
    }
 
    return 0;
}