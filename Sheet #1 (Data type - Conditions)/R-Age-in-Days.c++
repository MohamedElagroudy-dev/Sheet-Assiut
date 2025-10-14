#include <iostream>

using namespace std;

int main()
{
    int age ,year,month,day;
    cin >> age;

    year = age /365;

    month = (age%365)/30;

    day = (age%365)%30;

    cout<<year<<" years\n"
    <<month<<" months\n"
    <<day<<" days";

    return 0;
}
