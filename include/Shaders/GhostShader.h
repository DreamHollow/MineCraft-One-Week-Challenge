#ifndef GHOSTSHADER_H_INCLUDED
#define GHOSTSHADER_H_INCLUDED 1

#include "BasicShader.h"

/// @brief Shader that generates a semi-translucent and flowing appearance, much like water.
class GhostShader : public BasicShader {
  public:
    GhostShader();
    void loadTime(const float &time);

  private:
    void getUniforms() override;
    GLuint m_time;
};

#endif
