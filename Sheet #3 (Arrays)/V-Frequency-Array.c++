#include <iostream>
using namespace std;

#define fast \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL)

int main()
{
    fast;

    int size, counter;
    cin >> size >> counter;

    long long arr[size];   // acceptable in competitive programming
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    long long freq[counter + 1] = {0};

    for (int i = 0; i < size; i++)   // FIXED
    {
        if (arr[i] <= counter)      // SAFETY CHECK
            freq[arr[i]]++;
    }

    for (int i = 1; i <= counter; i++)
    {
        cout << freq[i] << '\n';
    }

    return 0;
}
