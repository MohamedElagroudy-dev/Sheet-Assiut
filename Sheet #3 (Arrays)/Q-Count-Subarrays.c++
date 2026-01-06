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

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        if (!(cin >> n)) break;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int Counter = 0;

        for (int i = 0; i < n; ++i) {

            int current_max = INT_MIN;
            for (int j = i; j < n ; ++j) {

                if(a[j]>current_max)
                {
                    current_max = a[j];
                    Counter++;
                }
                else
                {
                    break;
                }

            }
        }

        cout <<Counter<<endl;
    }
    return 0;
}
