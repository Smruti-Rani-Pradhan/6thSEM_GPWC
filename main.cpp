#include<SFML/Graphics.hpp>
using namespace sf;
using namespace std;
int main(){
    auto window=sf::RenderWindow(sf::VideoMode(800,600),"My First");
    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color::Cyan);
    shape.setPosition(375.f,275.f);
    while(window.isOpen()){
        Event event;
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }
    window.clear(sf::Color::Black);
    window.draw(shape);
    window.display();

  }
return 0;
}