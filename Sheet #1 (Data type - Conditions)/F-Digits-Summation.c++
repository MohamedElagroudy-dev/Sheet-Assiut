#include <iostream>
using namespace std;
int main() {
    long long n, m;
    cin >> n>>m ;
    
    n= n % 10; 
    m= m % 10; 
    int sum = n + m;
    cout << sum;
    return 0;
}