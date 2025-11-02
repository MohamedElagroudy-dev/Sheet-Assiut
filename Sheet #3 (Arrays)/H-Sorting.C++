#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define fast \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); \
    cout.tie(NULL)

int main() {
    fast;
    int N;
    if (!(cin >> N)) return 0;

    vector<int> A(N);
    
    for (int i = 0; i < N; ++i) {
        if (!(cin >> A[i])) return 0;
    }

    int n = A.size();
    for (int i = 0; i < n; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (A[j] < A[min_idx]) {
                min_idx = j;
            }
        }
        swap(A[i], A[min_idx]);
    }

    for (int i = 0; i < n; ++i) {
        cout << A[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}