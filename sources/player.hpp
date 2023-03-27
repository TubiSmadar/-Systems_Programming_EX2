#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "card.hpp"
#include <stack>


using namespace std;
namespace ariel{
    class Player{
        private:
            std::string name;
            std::stack<card> stack;
        
        public:
            Player();
            Player(std::string name);
            
            
            int cardesTaken();
            int stacksize();
    };
}
#endif