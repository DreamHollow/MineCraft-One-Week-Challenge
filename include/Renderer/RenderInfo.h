#ifndef RENDERINFO_H_INCLUDED
#define RENDERINFO_H_INCLUDED 1

/// @brief OpenGL adjacent struct that helps with VAO binding.
struct RenderInfo {
    GLuint vao = 0;
    GLuint indicesCount = 0;

    inline void reset()
    {
        vao = 0;
        indicesCount = 0;
    }
};

#endif
