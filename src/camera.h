#pragma once

#include "threedbg.h"

namespace threedbg {
namespace camera {
glm::fmat4 getProjMat(void);

void setEye(glm::fvec3 eye);
glm::fvec3 getEye(void);
void setCenter(glm::fvec3 center);
glm::fvec3 getCenter(void);
void setUp(glm::fvec3 up);
glm::fvec3 getUp(void);
void setFovy(float fovy);
float getFovy(void);

void rotateEye(float hangle, float vangle);
void rotateCenter(float hangle, float vangle);
} // namespace camera
} // namespace threedbg