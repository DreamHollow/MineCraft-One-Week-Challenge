#include "GL/GLFunctions.h"

/// @brief Universally applicable triangle drawing call for OpenGL.
/// @param indicesCount 
void GL::drawElements(GLuint indicesCount) noexcept
{
    glDrawElements(GL_TRIANGLES, indicesCount, GL_UNSIGNED_INT, nullptr);
}

/// @brief GL call to bind the VAO, which permits object persistence in GPU.
/// @param vao 
void GL::bindVAO(GLuint vao) noexcept
{
    glBindVertexArray(vao);
}
