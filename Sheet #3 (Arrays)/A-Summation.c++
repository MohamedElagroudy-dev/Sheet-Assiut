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
    long long sum =0;
    for(int i =0 ; i < n ; i++)
    {
        cin>>arr[i];
        sum +=arr[i];
    }
    if (sum < 0)
    {
        sum *= -1;
    }
    cout<<sum<<endl;

}
