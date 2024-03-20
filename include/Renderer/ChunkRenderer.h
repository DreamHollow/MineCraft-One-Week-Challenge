#ifndef CHUNKRENDERER_H_INCLUDED
#define CHUNKRENDERER_H_INCLUDED 1

#include <vector>

#include "Shaders/ChunkShader.h"

struct RenderInfo;
class ChunkMesh;
class Camera;

/// @brief Block chunk renderer, displays actual blocks.
class ChunkRenderer {
  public:
    void add(const ChunkMesh &mesh);
    void render(const Camera &camera);

  private:
    std::vector<const RenderInfo *> m_chunks;

    ChunkShader m_shader;
};

#endif
