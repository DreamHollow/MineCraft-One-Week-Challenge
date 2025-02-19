#ifndef SKYBOXRENDERER_H_INCLUDED
#define SKYBOXRENDERER_H_INCLUDED 1

#include "Model.h"
#include "Shaders/SkyboxShader.h"
#include "Texture/CubeTexture.h"

class Camera;

/// @brief Renderer that specifically draws the skybox and entities outside player reach.
class SkyboxRenderer {
  public:
    SkyboxRenderer();

    void render(const Camera &camera);

  private:
    Model m_skyCube;
    SkyboxShader m_shader;
    CubeTexture m_cubeTexture;
};

#endif // SKYBOXRENDERER_H_INCLUDED
