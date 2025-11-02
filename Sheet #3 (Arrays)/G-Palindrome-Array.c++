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
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    bool flag = true;
    for(int i =0 ; i < n/2 ; i++)
    {
        if(arr[i] != arr[n-1-i])
            flag = false;
    }

    if(flag)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;

}
