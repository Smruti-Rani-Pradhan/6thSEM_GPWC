#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

int main() {
    auto window = sf::RenderWindow(sf::VideoMode(800,600), "My First");
    window.setFramerateLimit(60);

    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color::Red);
    shape.setPosition(100.f,100.f);

    sf::RectangleShape player({100.f,50.f});
    player.setFillColor(sf::Color::Blue);
    player.setPosition(300.f,300.f);

    while(window.isOpen()) {

        Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Movement
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            player.move(0.f,-5.f);

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            player.move(0.f,5.f);

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            player.move(-5.f,0.f);

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            player.move(5.f,0.f);

        // Rotation
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::E))
           player.rotate(2.f);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
            player.rotate(-2.f);

        window.clear(sf::Color::Black);
        window.draw(shape);
        window.draw(player); 
        window.display();
    }

    return 0;
}
