#include <iostream>
using namespace std;
int main()
{

    int m,n,find;
    cin >> n>>m;
    bool flag = false;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin>>find;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == find)
            {
                flag = true;
                break;
            }
            else
            {
                flag = false;
            }
        }
        if (!flag)
        {
            break;
        }
    }
    if (flag)
    {
        cout << "will not take number";
    }
    else
    {
        cout << "will take number";
    }
}