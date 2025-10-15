#include <iostream>

using namespace std;

int main()
{
    int a,b,c,max,min;
    cin>>a>>b>>c;

    if(a>=b && a>=c)
    {
        if(b<c)
            cout<<b<<endl<<c<<endl<<a<<endl;
        else
            cout<<c<<endl<<b<<endl<<a<<endl;
    }
    else if(b >=a && b >= c )
    {
        if(a<c)
            cout<<a<<endl<<c<<endl<<b<<endl;
        else
            cout<<c<<endl<<a<<endl<<b<<endl;
    }
    else
    {
        if(a<b)
            cout<<a<<endl<<b<<endl<<c<<endl;
        else
            cout<<b<<endl<<a<<endl<<c<<endl;
    }
    cout<<endl<<a<<endl<<b<<endl<<c;
    return 0;
}
