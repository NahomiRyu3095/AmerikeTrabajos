#include<iostream>
#include "Game.hh"

int main()
{
    /*sf::RectangleShape* rectanglesShape{new sf::RectangleShape(sf::Vector2f(100, 100))};
    rectanglesShape->setPosition(sf::Vector2f(200, 50));
    rectanglesShape->setFillColor(sf::Color::Magenta);
    rectanglesShape->setOutlineThickness(5);
    rectanglesShape->setOutlineColor(sf::Color::Green);*/


    Game* game{new Game()};
    game->Initialize();

    delete game;

    return EXIT_SUCCESS;
}