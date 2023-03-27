#ifndef CARD_HPP
#define CARD_HPP
#include <string>
using namespace std;

namespace ariel {
    class card{
        private:
            int val;
            std::string shape;

        public:
            card(int val, std::string shape);
            void setVal(int val);
            int getVal();
            std::string getShape();
            void setShape(std::string shape);
            void showCard();
    };
}

#endif