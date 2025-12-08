#include <iostream>
using namespace std;

#define fast \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL)

int main()
{
    fast;
    int size,c =0;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    bool flag = true;

    while (flag)
    {
        for (int i = 0; i < size; i++)
        {
            if(arr[i] % 2 == 0)
            {
                arr[i] = arr[i]/2;
            }
            else
            {
                flag = false;
                break;
            }
        }
        c++;
    }
    cout<<c-1;
    

}