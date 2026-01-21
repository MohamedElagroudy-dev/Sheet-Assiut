#include <iostream>
#include <algorithm>
using namespace std;

#define fast \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL)
    
void solution()
{
    string str;
    bool space = false;
    while (cin >> str)
    {
        reverse(str.begin(), str.end());
        if (space)
        {
            cout << " ";
        }
        space = true;
        cout << str;
    }
}
int main()
{
    fast;

    solution();
    return 0;
}
