#ifndef RAY_H_INCLUDED
#define RAY_H_INCLUDED 1

#include "glm.h"

/// @brief Raycasting class associated with player's line of sight.
class Ray {
  public:
    Ray(const glm::vec3 &position, const glm::vec3 &direction);

    void step(float scale);

    const glm::vec3 &getEnd() const;

    float getLength() const;

  private:
    glm::vec3 m_rayStart;
    glm::vec3 m_rayEnd;
    glm::vec3 m_direction;
};

#endif // RAY_H_INCLUDED
