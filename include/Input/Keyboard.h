#ifndef KEYBOARD_H_INCLUDED
#define KEYBOARD_H_INCLUDED 1

#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>

#include <array>

/// @brief Handles keyboard inputs and events.
class Keyboard {
  public:
    Keyboard();

    void update(sf::Event e);

    bool isKeyDown(sf::Keyboard::Key key) const;
    bool keyReleased(sf::Keyboard::Key key) const;

  private:
    std::array<bool, sf::Keyboard::KeyCount> m_keys;
    sf::Keyboard::Key m_recentlyReleased;
};

#endif