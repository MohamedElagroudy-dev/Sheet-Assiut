#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

#define fast \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL)

int main() {
    fast;
    int size, maxpos, minpos;
    cin >> size;
    int *arr = new int[size];
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] < minVal)
        {
            minVal = arr[i];
            minpos = i;
        }
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            maxpos = i;
        }
    }
    swap(arr[minpos], arr[maxpos]);
    for (int i = 0 ; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
