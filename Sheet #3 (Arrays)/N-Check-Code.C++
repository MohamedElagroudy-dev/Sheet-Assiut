#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> 

using namespace std;

#define fast \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL)

int main()
{
    fast;
    int a, b;
    if (!(cin >> a >> b)) return 0;

    string code;
    if (!(cin >> code)) return 0;
    
    
    if (code[a] != '-') {
        cout << "No" << endl;
        return 0;
    }
    
    for (int i = 0; i < code.size(); i++)
    {
        if (i == a) {
            continue;
        }
        
        if (code[i] < '0' || code[i] > '9')
        {
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;

    return 0;
}