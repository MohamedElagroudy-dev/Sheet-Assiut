#include <iostream>

using namespace std;

void Solution1()
{
    int number;
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			cout << i << endl;
		}
	}
}

void Solution2()
{
    double num,c;
    cin>>num;

    for(int i = 1 ; i<=num ; i++)
    {
        c = num /i;
        if(c == (int)c)
            cout<<i<<endl;
    }
}

int main()
{

    Solution1();
    return 0;

}
