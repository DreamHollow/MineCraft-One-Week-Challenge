#ifndef TEXTURE_H_INCLUDED
#define TEXTURE_H_INCLUDED 1

#include <glad/glad.h>

#include <SFML/Graphics.hpp>
#include <string>

#include "Util/NonCopyable.h"

/// @brief Standard texture that will be mapped to objects.
class BasicTexture : public NonCopyable {
  public:
    BasicTexture() = default;
    BasicTexture(const std::string &file);

    ~BasicTexture();

    void loadFromImage(const sf::Image &image);
    void loadFromFile(const std::string &file);

    void bindTexture() const;

  private:
    GLuint m_id;
};

#endif // TEXTURE_H_INCLUDED
