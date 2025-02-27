#ifndef FRUSTUM_H_INCLUDED
#define FRUSTUM_H_INCLUDED 1

#include <array>

#include "glm.h"

struct AABB;

/// @brief Vertex based construct, usually flat.
struct Plane {
    float distanceToPoint(const glm::vec3 &point) const;

    float distanceToOrigin;
    glm::vec3 normal; // Vector3 normals
};

class ViewFrustum {
  public:
    void update(const glm::mat4 &projViewMatrix) noexcept;

    bool isBoxInFrustum(const AABB &box) const noexcept;

  private:
    std::array<Plane, 6> m_planes;
};

#endif // FRUSTUM_H_INCLUDED
