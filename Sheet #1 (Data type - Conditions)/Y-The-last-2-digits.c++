#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    
    A = A % 100;
    B = B % 100;
    C = C % 100;
    D = D % 100;
    
    long long result = (((A * B) % 100) * C % 100) * D % 100;
    
    if(result < 10) {
        cout << "0";
    }
    cout << result << endl;
    
    return 0;
}