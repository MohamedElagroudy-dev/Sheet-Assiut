#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    
    string reversed = str;
    for(int i = 0; i < str.length(); i++) {
        reversed[i] = str[str.length() - 1 - i];
    }
    
    while(reversed.length() > 1 && reversed[0] == '0') {
        reversed.erase(0, 1);
    }
    
    cout << reversed << endl;
    cout << (str == reversed ? "YES" : "NO") << endl;
    
    return 0;
}