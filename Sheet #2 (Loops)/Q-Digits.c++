#include <iostream>

using namespace std;


int main()
{
    int c,x;
    cin>>c;

    for(int i =0 ; i < c ; i++)
    {
        cin>>x;
        if (x == 0) {
            cout << 0 << '\n';
            continue;
        }
        while(x != 0)
        {
            cout<<x%10<<" ";
            x = x/10;
        }
        cout<<endl;
    }

}
