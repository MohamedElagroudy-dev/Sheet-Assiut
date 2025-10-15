#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;
    char opr, equalChr;
    int myResult;
    cin >> num1 >> opr >> num2 >> equalChr >> result;

    switch (opr)
    {
    case '+':
        myResult = num1 + num2;
        break;
    case '-':
        myResult = num1 - num2;
        break;
    case '*':
        myResult = num1 * num2;
        break;
    }
    if (myResult == result)
        cout << "Yes" << endl;
    else
        cout << myResult << endl;
    return 0;
}