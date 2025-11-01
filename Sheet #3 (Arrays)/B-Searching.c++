#include <iostream>
using namespace std;

using namespace std;

#define fast \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL)

int main()
{
    fast;
    int n, x, index =0;
    bool find = false;
    cin>>n;
    int arr[n];
    for(int i =0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    for(int i =0 ; i < n ; i++)
    {
        if(arr[i] == x)
        {
            index = i;
            find = true;
            break;
        }
    }
    if(find)
        cout<<index;
    else
        cout<<-1;

    return 0;

}
