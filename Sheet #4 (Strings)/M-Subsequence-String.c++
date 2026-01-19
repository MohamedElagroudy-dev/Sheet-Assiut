#include <iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string hello = "hello";

    int index = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (hello[index] == str[i])
        {
            index++;
        }
    }
    if (index == hello.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
