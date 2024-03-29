#pragma once

#include "Drawing.hpp"
#include "PCH.hpp"
#include "vec2.hpp"
#include <SDL3/SDL.h>

using namespace math;

namespace gd {

class Collider : public Drawing {
public:
  using Drawing::Drawing;
  [[nodiscard]] const bool collidingWith(Collider &c) noexcept;

private:
  const vec2f computeEdgeNormal(const vec2f &pointA, const vec2f &pointB) noexcept;
  const std::vector<vec2f> computeAllNormals(const std::vector<vec2f> &r) noexcept;
  const std::pair<float, float> project(const std::vector<vec2f> &r,
                                        const vec2f &axis) noexcept;
  // true if overlapping false otherwise
  const bool overlap(const std::pair<float, float> &projection1,
                     const std::pair<float, float> &projection2) noexcept;
  const bool SAT(const std::vector<vec2f> &r1,
                 const std::vector<vec2f> &r2) noexcept;
};

} // namespace gd
