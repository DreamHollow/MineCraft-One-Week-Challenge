#ifndef RENDERMASTER_H_INCLUDED
#define RENDERMASTER_H_INCLUDED 1

#include <SFML/Graphics.hpp>

#include "Config.h"
#include "ChunkRenderer.h"
#include "FloraRenderer.h"
#include "SkyboxRenderer.h"
#include "WaterRenderer.h"
#include "GhostRenderer.h"
#include "Audio/MusicPlayer.h"

class Camera;
class ChunkSection;

/// @brief Master rendering class that handles the sum of drawn in-game objects.
class RenderMaster {
  public:
    void drawChunk(const ChunkSection &chunk);
    void drawSky();

    void finishRender(sf::Window &window, const Camera &camera);

  private:
    // Chunks
    ChunkRenderer m_chunkRenderer;
    WaterRenderer m_waterRenderer;
    FloraRenderer m_floraRenderer;
    GhostRenderer m_ghostRenderer;

    // Detail
    SkyboxRenderer m_skyboxRenderer;

    // Audio
    //MusicPlayer m_musicPlayer; // This works but is off by default

    bool m_drawBox = false;
};

#endif // RENDERMASTER_H_INCLUDED
