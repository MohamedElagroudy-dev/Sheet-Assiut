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
        
        bool first_output = true;
        
        for (int i = 0; i < n; ++i) {
            
            int current_max = INT_MIN;
            for (int j = i; j < n ; ++j) {
                
                current_max = max(current_max, a[j]);
                
                if (!first_output) {
                    cout << " "; 
                }
                cout << current_max;
                first_output = false;
            }
        }
        
        cout << "\n";
    }
    return 0;
}