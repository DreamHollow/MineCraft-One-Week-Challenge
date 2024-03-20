#ifndef RAY_H_INCLUDED
#define RAY_H_INCLUDED 1

#include "glm.h"

/// @brief Ray, as in raycasting from an origin point to a distant point.
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

#endif
