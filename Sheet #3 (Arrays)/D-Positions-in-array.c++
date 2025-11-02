#include <iostream>
using namespace std;

#define fast \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL)

int main()
{
    fast;
    int size;
    cin >> size;
    int *A = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
        if (A[i] <= 10)
        {
            cout << "A[" << i << "]"
                 << " = " << A[i] << endl;
        }
    }
}