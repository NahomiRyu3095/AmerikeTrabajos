#include "Game.hh"
#include "Constants.hh"
#include "Rectangle.hh"

Rectangle* rectangle{new Rectangle(100, 100, 200, 100, sf::Color::Cyan)};
Game::Game()
{
    window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), GAME_NAME);
    event = new sf::Event();
}

Game::~Game()
{
}

void Game::Start() //cosas para empezar
{

}

void Game::Initialize()//Esto es lo que se inicializa el iniciar el juego
{
    Start();
    MainLoop();
}

void Game::Update() //Logica, Animaciones, etc.
{
}

void Game::MainLoop() //El loop importante que se repite x cantida de veces
{
    while (window->isOpen())
    {
        while (window->pollEvent(*event))
        {
            if (event->type == sf::Event::Closed)
            {
                window->close();
            }
        }
        Input();
        Update();
        Render();
    }
    Destoy ();
}
void Game::Render()// lo que rendesiza en la pantalla
{
    window->clear(sf::Color::Black);
    Draw();
    window->display();
}
void Game::Draw()//Dibujo de sprites o geometria
{
    window->draw(*rectangle->GetShape());
}
void Game::Input()// Teclado, Joysticks, etc.
{

}

void Game::Destoy()// Desturiur los creados al cerrar
{
    delete window;
    delete event;
}
