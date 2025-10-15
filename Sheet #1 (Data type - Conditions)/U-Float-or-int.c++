#include<iostream>
using namespace std;
int main()
{
    double num;
    cin >> num;

    if(num == (int)num)
        cout << "int " << (int)num << endl;
    else
        cout << "float " << (int)num<<" "<<(num-(int)num) << endl;

    return 0;
}