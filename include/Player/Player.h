#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED 1

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>

#include "Entity.h"
#include "Input/ToggleKey.h"
#include "Item/ItemStack.h"
#include "Debugger/Debugger.h"

class Keyboard;
class World;
class RenderMaster;

/// @brief Player character, including player movements and world interactions.
class Player : public Entity {
  public:
    Player();

    void handleInput(const sf::Window &window, Keyboard &keyboard);

    void update(float dt, World &wolrd);
    void collide(World &world, const glm::vec3 &vel);//, float dt);

    void addItem(const Material &material);

    void draw();//RenderMaster &master);

    ItemStack &getHeldItems();

  private:
    void jump();

    void keyboardInput(Keyboard &keyboard);
    void mouseInput(const sf::Window &window);
    bool m_isOnGround = false;
    bool m_isFlying = false;
    bool m_isSneak = false;

    std::vector<ItemStack> m_items;
    std::vector<sf::Text> m_itemText;
    sf::Text m_posPrint;
    int m_heldItem = 0;

    ToggleKey m_itemDown;
    ToggleKey m_itemUp;
    ToggleKey m_flyKey;

    ToggleKey m_num1;
    ToggleKey m_num2;
    ToggleKey m_num3;
    ToggleKey m_num4;
    ToggleKey m_num5;

    ToggleKey m_slow;

    glm::vec3 m_acceleration;
};

#endif // PLAYER_H_INCLUDED
