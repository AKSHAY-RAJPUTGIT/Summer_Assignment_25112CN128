#include <iostream>
using namespace std;
int main() {
    char str[100];
    cin.getline(str, 100);
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
    }
    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
    return 0;
}