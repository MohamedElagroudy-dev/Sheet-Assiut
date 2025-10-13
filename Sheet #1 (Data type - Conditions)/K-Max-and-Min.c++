#include <iostream>

using namespace std;

int main()
{
    int a,b,c,max,min;
    cin>>a>>b>>c;

    if(a>=b && a>=c)
    {
        max = a;
        if(b<c)
            min = b;
        else
            min = c;
    }
    else if(b >=a && b >= c )
    {
        max = b;
        if(a<c)
            min = a;
        else
            min = c;
    }
    else
    {
        max =c;
        if(a<b)
            min = a;
        else
            min = b;
    }
    cout<<min<<" "<<max;
    return 0;
}
