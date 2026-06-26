#include <iostream>
using namespace std;
int main() {
    int score = 0, answer;
    cout << "===== QUIZ APPLICATION =====\n\n";
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;
    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. HTML\n2. CSS\n3. C++\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;
    cout << "\n3. How many days are there in a leap year?\n";
    cout << "1. 365\n2. 366\n3. 364\n4. 367\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;
    cout << "\n===== RESULT =====\n";
    cout << "Your Score: " << score << "/3\n";
    if (score == 3)
        cout << "Excellent!\n";
    else if (score == 2)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";
    return 0;
}