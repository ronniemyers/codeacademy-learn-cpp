/* The 23 toothpick game */

#include <iostream>
using namespace std;

void play();

int main() {
    play();

    return 0;
}

void play() {
    cout << "|| The 23 Toothpick Game || \n";
    cout << "Human vs. Computer \n";
    int num, humanNum, computerNum, roundNum = 1, toothpicks = 23;

    while (0 < toothpicks) {

        if (roundNum % 2 == 0) {
            if (toothpicks == 1) {
                cout << "\nComputer, this is the last toothpick! You lost the game.";
                break;
            }
            if (toothpicks > 4) {
                toothpicks -= + (4 - humanNum);
                computerNum = (4 - humanNum);
            } else if (toothpicks == 3) {
                toothpicks -= 2;
                computerNum = 3;
            } else if (toothpicks == 4) {
                toothpicks -= 3;
                computerNum = 3;
            } else {
                cout << "Error in calculating";
            }
            cout << "\nRound " << roundNum << ":\nComputer, take 1, 2, or 3 toothpicks: " << computerNum << endl;
            cout << "Current toothpicks: " << toothpicks << endl;

        } else {
            if (toothpicks == 1) {
                cout << "\nHuman, this is the last toothpick! You lost the game.";
                break;
            }
            cout << "\nRound " << roundNum << ":\nHuman, take 1, 2, or 3 toothpicks: ";
            cin >> num;
            humanNum = num;
            if (num == 1) {
                toothpicks--;
                cout << "Current toothpicks: " << toothpicks << endl;
            } else if (num == 2) {
                toothpicks -= 2;
                cout << "Current toothpicks: " << toothpicks << endl;
            } else if (num == 3) {
                toothpicks -= 3;
                cout << "Current toothpicks: " << toothpicks << endl;
            } else {
                cout << "Enter a valid number!";
            }
        }
        roundNum++;
    }
}