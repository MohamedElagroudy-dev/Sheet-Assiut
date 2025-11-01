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
    int n, x;
    cin>>n;
    int arr[n];
    for(int i =0 ; i < n ; i++)
    {
        cin>>x;
        if(x<0)
        {
            arr[i] = 2;
            continue;
        }
        if(x == 0)
        {
            arr[i] =0;
            continue;
        }
        arr[i] = 1;
    }
    for(int i =0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}
