#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char opr;
    cin >> num1 >> opr >> num2;
    
    bool isRight;
    switch (opr)
    {
    case '=':
        isRight = (num1 == num2);
        break;
    case '>':
        isRight = (num1 > num2);
        break;
    case '<':
        isRight = (num1 < num2);
        break;
    }
    
    cout << (isRight ? "Right" : "Wrong") << endl;
    return 0;
}