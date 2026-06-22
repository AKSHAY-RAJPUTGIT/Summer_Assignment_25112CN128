#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int freq[26] = {0};
    for(char ch : str)
    {
        if(ch >= 'a' && ch <= 'z')
            freq[ch - 'a']++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] > 0)
            cout << char(i + 'a') << " = " << freq[i] << endl;
    }
    return 0;
}