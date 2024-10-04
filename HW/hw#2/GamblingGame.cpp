#include "GamblingGame.h"
#include <random>
#include <ctime>

GamblingGame::GamblingGame(Player* player1, Player* player2) {
    this->players[0] = player1;
    this->players[1] = player2;
    srand(static_cast<unsigned int>(time(nullptr)));
}

void GamblingGame::play() {
    while (true) {
        Player* currentPlayer = players[this->index];
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << currentPlayer->getName() << ":<Enter>";
        cin.get();

        int numbers[3];
        bool isSame = true;
        for (int i = 0; i < 3; i++) {
            numbers[i] = rand() % 3;
            if (i > 0 && numbers[i] != numbers[i - 1]) {
                isSame = false;
            }
        }

        cout << "\t\t\t" << numbers[0] <<
            "\t" << numbers[1] <<
            "\t" << numbers[2] << "\t";
        if (isSame) {
            cout << currentPlayer->getName() << "님 승리!!" << endl;
            break;
        } else {
            cout << "아쉽군요!";
        }

        this->index = this->index == 0 ? 1 : 0;
    }
}