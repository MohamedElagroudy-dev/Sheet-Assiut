#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;

    int index = 1;
    char temp = str[0];
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != temp)
        {
            temp = str[i];
            index++;
        }
    }
    cout<<index;
}
