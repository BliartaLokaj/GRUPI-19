#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player {
public:
    string name;
    int score;

    Player(string n) {
        name = n;
        score = 0;
    }

    void increaseScore() {
        score++;
    }
};

int main() {
    string playerName;
    cout << "Shkruaj emrin e lojtarit: ";
    getline(cin, playerName);

    Player player1(playerName);

    cout << "\nLoja ka filluar nga " << player1.name << endl;

    // Gjenerimi i numrit te rastesishem
    srand(time(0));
    int secretNumber = rand() % 5 + 1;
    int guess;

    cout << "Gjeje numrin (1 - 5): ";
    cin >> guess;
 if (guess == secretNumber) {
        cout << "Urime! E gjetet numrin e sakte 🎉" << endl;
        player1.increaseScore();
    } else {
        cout << "Gabim! Numri ishte: " << secretNumber << endl;
    }

    cout << "\nPiket aktuale te " << player1.name << ": " << player1.score << endl;

    return 0;
}
