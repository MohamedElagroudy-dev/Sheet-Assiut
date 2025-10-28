#include <iostream>

using namespace std;


int main()
{

    int a, b, flag = 0;
    cin>>a>>b;

    if(a < 44 && b < 44)
    {
        for(int i = a ; i <= b;i++ )
        {
            if (i == 4 || i == 7)
            {
                cout<<i<<" ";
                flag++;
            }
        }
    }
    else
    {
        bool lucky;
        int r;
        for(int i = a ; i <= b;i++ )
        {

            lucky = true;
            int temp = i;
            while(temp != 0)
            {
                r= temp %10;
                temp = temp /10;
                if (r != 4 && r != 7)
                {
                    lucky = false;
                    break;
                }
            }
            if(lucky)
            {
                cout<<i<<" ";
                flag++;
            }

        }
    }
    if(flag==0)
        cout<<-1;


    return 0;

}
