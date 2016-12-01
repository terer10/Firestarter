#ifndef Game_H
#define Game_H
#include <memory>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "make_unique.h"

class Game{
    public:
        Game();
        virtual ~Game();
    private:
        void update();
        void render();
        void processEvents();
        void run();
        std::unique_ptr<sf::RenderWindow> _window;
        const int _ups = 60.f;
        bool _running = false;
};

#endif // Game_H
