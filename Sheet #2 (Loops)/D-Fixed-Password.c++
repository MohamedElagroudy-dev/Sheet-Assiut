#include <iostream>

using namespace std;

int main()
{
    int Cpassword = 1999;
    int pass;

    while(true)
    {
        cin>>pass;
        if(pass == Cpassword)
        {
            cout<<"Correct"<<endl;
            break;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    return 0;
}
