#ifndef GHOSTRENDERER_H_INCLUDED
#define GHOSTRENDERER_H_INCLUDED 1

// Renderer for ghost blocks / entities

#include <SFML/Graphics.hpp>
#include <vector>

#include "Shaders/GhostShader.h"

struct RenderInfo;
class ChunkMesh;
class Camera;

/// @brief Renderer specifically targeting ghost blocks.
class GhostRenderer {
  public:
    void add(const ChunkMesh &mesh);
    void render(const Camera &camera);

  private:
    std::vector<const RenderInfo *> m_chunks;

    GhostShader m_shader;
};

#endif
