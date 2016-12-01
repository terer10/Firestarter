#include "Game.h"

Game::Game(){
    _window = make_unique<sf::RenderWindow>(sf::VideoMode(640,480,32),"");
    _running = true;
    run();
}
void Game::update(){

}
void Game::render(){
    _window->clear(sf::Color::Black);
    _window->display();
}
void Game::processEvents(){
    sf::Event e;
    while(_window->pollEvent(e)){
        if(e.type == sf::Event::Closed){
            _running = false;
            _window->close();
        }
    }
}
void Game::run(){
    sf::Clock clock;
    const sf::Time UPDATE_TIME = sf::seconds(1.f/_ups);
    while(_running){
        processEvents();
        if(clock.getElapsedTime() >= UPDATE_TIME){
            update();
        }
        render();
    }
}
Game::~Game(){

}
