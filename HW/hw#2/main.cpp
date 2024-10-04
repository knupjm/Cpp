#include <iostream>
#include <string>
#include "Player.h"
#include "GamblingGame.h"

using namespace std;

int main() {
    cout << "***** 겜블링 게임을 시작합니다. *****" << endl;
    string player1Name, player2Name;
    cout << "첫번째 선수 이름>>";
    cin >> player1Name;
    cout << "두번째 선수 이름>>";
    cin >> player2Name;

    Player player1(player1Name);
    Player player2(player2Name);
    GamblingGame game(&player1, &player2);
    game.play();

    return 0;
}