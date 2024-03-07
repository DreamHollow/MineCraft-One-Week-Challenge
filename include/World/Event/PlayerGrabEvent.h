#ifndef PLAYERGRABEVENT_H_INCLUDED
#define PLAYERGRABEVENT_H_INCLUDED 1

#include <SFML/Graphics.hpp>

#include "Maths/glm.h"
#include "IWorldEvent.h"

class Player;

/// @brief Event class that handles what happens to a block in a world as a player interacts.
class PlayerGrabEvent : public IWorldEvent {
  public:
    PlayerGrabEvent(sf::Mouse::Button button, const glm::vec3 &location,
                   Player &player);

    void handle(World &world);

  private:
    //void dig(World &world);

    sf::Mouse::Button m_buttonPress;
    glm::vec3 m_digSpot;
    Player *m_pPlayer;
};

#endif
