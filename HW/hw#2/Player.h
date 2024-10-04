#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
public:
    Player(std::string& name);
    std::string& getName();
};

#endif // PLAYER_H