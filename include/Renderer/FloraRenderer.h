#ifndef FLORARENDERER_H_INCLUDED
#define FLORARENDERER_H_INCLUDED 1

#include <SFML/Graphics.hpp>
#include <vector>

#include "Shaders/FloraShader.h"

struct RenderInfo;
class ChunkMesh;
class Camera;

/// @brief Renderer handling 'flora' based entities that are not true blocks.
class FloraRenderer {
  public:
    void add(const ChunkMesh &mesh);
    void render(const Camera &camera);

  private:
    std::vector<const RenderInfo *> m_chunks;

    FloraShader m_shader;
};

#endif // FLORARENDERER_H_INCLUDED
