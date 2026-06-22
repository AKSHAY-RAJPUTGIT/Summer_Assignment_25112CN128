#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string ans = "";
    for(char ch : str)
    {
        if(ch != ' ')
            ans += ch;
    }
    cout << ans;
    return 0;
}