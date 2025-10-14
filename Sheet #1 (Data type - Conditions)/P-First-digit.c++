#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    n = n /1000;

    if (n % 2 ==0)
    {
        cout << "EVEN"<< endl;
    }
    else if (n % 2 ==1)
    {
        cout << "ODD"<< endl;
    }
    return 0;
}
