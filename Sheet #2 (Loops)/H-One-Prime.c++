#include <iostream>

using namespace std;

int main()
{

    int n, flag=0;

    cin>>n;
    if(n <= 1)
    {
        cout<<"NO";
        return 0;
    }
    for(int i =1 ; i <= n ; i++)
    {
        if(n % i == 0)
        {
            flag++;
        }
    }
    flag == 2 ? cout << "YES" : cout << "NO";
    return 0;

}
