#include <iostream>

using namespace std;

int main()
{
    cout << "What number between 0 and 99 am I thinking of?" << endl;
    int randNumber = rand() % 100;

    bool userGuessed = false;
    int guessedNumber;
    do {
        cout << "Enter a number: ";
        cin >> guessedNumber;

        if (guessedNumber > randNumber) {
            cout << "Too high." << endl;
        } else if (guessedNumber < randNumber) {
            cout << "Too low." << endl;
        } else {
            cout << "Correct!" << endl;
            userGuessed = true;
        }

    } while (!userGuessed);

    cout << "Press any key to continue..." << endl;
    getchar();

    return 0;
}
