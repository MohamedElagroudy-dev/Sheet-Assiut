#include <iostream>

using namespace std;

int main()
{

    int num, flag=0;
    cin>>num;

    if(num <= 1)
    {
        cout<<"NO";
        return 0;
    }
    for(int n = 2 ;n <=num ; n++)
    {
        flag =0;
        for(int i =1 ; i <= n ; i++)
        {
            if(n % i == 0)
            {
                flag++;
            }
        }

        if(flag == 2)
            cout << n<<" ";
    }

    return 0;

}
