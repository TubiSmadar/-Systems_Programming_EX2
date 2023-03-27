#ifndef GAME_H
#define GAME_H

#include <string>
#include "player.hpp"
#include "card.hpp"
using namespace std;

namespace ariel {
class Game 
{
    private:
        Player& p1;
        Player& p2;

    public:
        Game(Player& p1, Player& p2);
        ~Game();

        void playTurn();
        void printLastTurn();
        void playAll();
        void printWiner(); 
        void printLog();
        void printStats();
};
}
#endif