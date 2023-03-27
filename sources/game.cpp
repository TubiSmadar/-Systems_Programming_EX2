#include "game.hpp"
#include <iostream>
using namespace std;
namespace ariel {

    Game::Game(Player& p1, Player& p2) : p1(p1), p2(p2) {
        std::cout << "Game constructor called" << std::endl;
    }

    Game::~Game() {
        std::cout << "Game destructor called" << std::endl;
    }

    void Game::playTurn() {
        // Method implementation goes here
    }

    void Game::printLastTurn() {
        // Method implementation goes here
    }

    void Game::playAll() {
        // Method implementation goes here
    }

    void Game::printWiner() {
        // Method implementation goes here
    }

    void Game::printLog() {
        // Method implementation goes here
    }

    void Game::printStats() {
        // Method implementation goes here
    }

} // namespace ariel
