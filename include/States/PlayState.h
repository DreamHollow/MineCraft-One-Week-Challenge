#ifndef PLAYSTATE_H_INCLUDED
#define PLAYSTATE_H_INCLUDED 1

#include "../Player/Player.h"
#include "StateBase.h"

#include "Input/Keyboard.h"
#include "Util/FPSCounter.h"
#include "World/Chunk/Chunk.h"
#include "World/World.h"

/// @brief Active game playing state, not associated with game menus.
class StatePlay : public StateBase {
  public:
    StatePlay(Application &app, const Config &config);

    void handleEvent(sf::Event e) override;
    void handleInput() override;

    void update(float deltaTime) override;

    void render(RenderMaster &renderer) override;

    void onOpen() override;

  private:
    Keyboard m_keyboard;
    Player m_player;
    World m_world;

    //FPSCounter m_fpsCounter;
};

#endif // PlayState_H_INCLUDED
