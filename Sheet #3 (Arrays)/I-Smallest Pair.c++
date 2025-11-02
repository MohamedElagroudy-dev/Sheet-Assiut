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
    int n ,c;
    cin>>c;
    while(c--)
    {
        cin>>n;
        int arr[n];
        for(int i =0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        long long min = arr[0] + arr[1] + 1, x;
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                    x = arr[i] + arr[j] + j - i;
                    if(x < min)
                    {
                        min =x;
                    }
                }
            }
        cout<<min<<endl;
    }


    return 0;

}
